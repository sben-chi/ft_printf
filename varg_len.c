/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   varg_len.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sben-chi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/05 10:15:32 by sben-chi          #+#    #+#             */
/*   Updated: 2021/12/07 16:10:13 by sben-chi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	len_string(const char *s)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
		i++;
	return (i);
}

int	len_int(int nb)
{
	int	i;

	i = 0;
	if (nb == 0 || nb < 0)
		i++;
	while (nb)
	{
		i++;
		nb /= 10;
	}
	return (i);
}

int	len_hexa(unsigned int nb)
{
	int	i;

	i = 0;
	if (nb == 0)
		i++;
	while (nb)
	{
		if ((nb % 16) >= 0 && (nb % 16) <= 15)
			i++;
		nb /= 16;
	}
	return (i);
}

int	len_address(void *nb)
{
	int				i;
	unsigned long	nbn;

	i = 2;
	nbn = (unsigned long)nb;
	if (nbn == 0)
		i++;
	while (nbn)
	{
		if ((nbn % 16) >= 0 && (nbn % 16) <= 15)
			i++;
		nbn /= 16;
	}
	return (i);
}

int	len_uint(unsigned int nb)
{
	int	i;

	i = 0;
	if (nb == 0)
		i++;
	while (nb)
	{
		i++;
		nb /= 10;
	}
	return (i);
}
