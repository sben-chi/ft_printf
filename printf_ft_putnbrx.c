/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf_ft_putnbrx.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/25 12:11:24 by sben-chi          #+#    #+#             */
/*   Updated: 2021/12/07 17:02:52 by sben-chi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	printf_ft_putnbrx(unsigned int nb, char a)
{
	char			c;
	unsigned int	i;
	int				len;

	len = len_hexa(nb);
	i = 10;
	if (a == 'x')
		c = 'a';
	else
		c = 'A';
	if (nb > 15)
		printf_ft_putnbrx(nb / 16, a);
	nb %= 16;
	if (nb >= 10 && nb <= 15)
	{
		while (i++ != nb)
			c++;
		write(1, &c, 1);
	}
	else
	{
		nb += '0';
		write(1, &nb, 1);
	}
	return (len);
}
