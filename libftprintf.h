/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libftprintf.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sben-chi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/07 16:22:45 by sben-chi          #+#    #+#             */
/*   Updated: 2021/12/07 16:22:50 by sben-chi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFTPRINTF_H
# define LIBFTPRINTF_H

# include <stdlib.h>
# include <unistd.h>
# include <stdarg.h>

int	printf_ft_putchar(char c);
int	printf_ft_putstr(char *s);
int	printf_ft_putptr(void *nb);
int	printf_ft_putnbr(int nb);
int	printf_ft_putnbru(unsigned int nb);
int	printf_ft_putnbrx(unsigned int nb, char a);
int	len_string(const char *s);
int	len_int(int nb);
int	len_hexa(unsigned int nb);
int	len_address(void *nb);
int	len_uint(unsigned int nb);
int	ft_printf(const char *str, ...);

#endif
