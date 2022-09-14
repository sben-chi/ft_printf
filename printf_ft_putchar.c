/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   prinf_ft_putchar.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sben-chi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/25 11:05:36 by sben-chi          #+#    #+#             */
/*   Updated: 2021/12/07 18:57:59 by sben-chi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	printf_ft_putchar(const char c)
{
	write(1, &c, 1);
	return (1);
}
