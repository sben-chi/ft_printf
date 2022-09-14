/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf_ft_putnbru.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sben-chi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/25 11:42:33 by sben-chi          #+#    #+#             */
/*   Updated: 2021/12/09 08:15:11 by sben-chi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	printf_ft_putnbru(unsigned int nb)
{
	int	len;

	len = len_uint(nb);
	if (nb > 9)
		printf_ft_putnbru(nb / 10);
	nb = nb % 10 + '0';
	write(1, &nb, 1);
	return (len);
}
