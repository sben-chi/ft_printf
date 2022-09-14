/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf_ft_putnbr.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/25 11:38:24 by sben-chi          #+#    #+#             */
/*   Updated: 2021/12/09 10:05:55 by sben-chi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	printf_ft_putnbr(int nb)
{
	int	len;

	len = len_int(nb);
	if (nb == -2147483648)
		write(1, "-2147483648", 11);
	else if (nb < 0)
	{
		nb *= -1;
		write (1, "-", 1);
		printf_ft_putnbr(nb);
	}
	else
	{
		if (nb > 9)
			printf_ft_putnbr(nb / 10);
		nb = nb % 10 + '0';
		write(1, &nb, 1);
	}
	return (len);
}
