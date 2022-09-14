/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sben-chi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/25 10:54:34 by sben-chi          #+#    #+#             */
/*   Updated: 2021/12/07 16:01:30 by sben-chi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	check_flags(char c)
{
	return (c == 'c' || c == 's' || c == 'p' || c == '%'
		|| c == 'd' || c == 'i' || c == 'u' || c == 'x' || c == 'X');
}

void	check_case(const char *str, int *i, va_list p_pile)
{
	if (*str == 'c')
		(*i) += printf_ft_putchar(va_arg(p_pile, int));
	else if (*str == '%')
		(*i) += printf_ft_putchar('%');
	else if (*str == 's')
		(*i) += printf_ft_putstr(va_arg(p_pile, char *));
	else if (*str == 'p')
		(*i) += printf_ft_putptr(va_arg(p_pile, void *));
	else if (*str == 'd' || *str == 'i')
		(*i) += printf_ft_putnbr(va_arg(p_pile, int));
	else if (*str == 'u')
		(*i) += printf_ft_putnbru(va_arg(p_pile, unsigned int));
	else if (*str == 'x' || *str == 'X')
		(*i) += printf_ft_putnbrx(va_arg(p_pile, int), *str);
}

int	ft_printf(const char *str, ...)
{
	va_list	p_pile;
	int		i;

	i = 0;
	va_start(p_pile, str);
	while (*str)
	{
		if (*(str) == '%' && check_flags(*(++str)))
		{
			check_case(str, &i, p_pile);
			str++;
		}
		while (*str && *str != '%')
		{
			i += printf_ft_putchar(*str);
			str++;
		}
		if (!(*str))
			break ;
	}
	va_end(p_pile);
	return (i);
}
