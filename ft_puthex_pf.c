/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex_pf.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymazini <ymazini@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 14:29:01 by ymazini           #+#    #+#             */
/*   Updated: 2024/11/26 17:27:28 by ymazini          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_puthex_pf(unsigned long nbr, size_t *count, char c)
{
	int	res;

	if (nbr > 15)
	{
		res = ft_puthex_pf(nbr / 16, count, c);
		if (res == -1)
			return (-1);
	}
	if (c == 'X')
	{
		return (ft_putchar_pf(UPP_HEX[nbr % 16], count));
	}
	else
	{
		return (ft_putchar_pf(LOW_HEX[nbr % 16], count));
	}
}
