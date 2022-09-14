/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf_ft_putp.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sben-chi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/25 11:52:34 by sben-chi          #+#    #+#             */
/*   Updated: 2021/12/07 17:03:23 by sben-chi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

void	print_in_hexa(unsigned long nb)
{
	char			c;
	unsigned long	a;

	a = 10;
	c = 'a';
	if (nb > 15)
		print_in_hexa(nb / 16);
	nb %= 16;
	if (nb >= 10 && nb <= 15)
	{
		while (a++ != nb)
			c++;
		write(1, &c, 1);
	}
	else
	{
		nb += '0';
		write(1, &nb, 1);
	}
}

int	printf_ft_putptr(void *nb)
{
	int	len;

	len = len_address(nb);
	write(1, "0x", 2);
	print_in_hexa((unsigned long )nb);
	return (len);
}
