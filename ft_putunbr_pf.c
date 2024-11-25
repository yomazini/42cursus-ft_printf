/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putunbr_pf.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymazini <ymazini@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 21:18:47 by ymazini           #+#    #+#             */
/*   Updated: 2024/11/25 23:08:00 by ymazini          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putunbr_pf(unsigned long n, size_t *count)
{
	int	res;

	if (n > 9)
	{
		res = ft_putunbr_pf(n / 10, count);
		if (res == -1)
			return (-1);
	}
	return (ft_putchar_pf(n % 10 + '0', count));
}
