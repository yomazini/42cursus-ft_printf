/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_pf.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymazini <ymazini@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 14:29:04 by ymazini           #+#    #+#             */
/*   Updated: 2024/11/25 23:07:25 by ymazini          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr_pf(int n, size_t *count)
{
	int	i;
	int	res;

	i = 0;
	if (n == -2147483648)
	{
		return (ft_putstr_pf("-2147483648", count));
	}
	if (n < 0)
	{
		res = ft_putchar_pf('-', count);
		if (res == -1)
			return (-1);
		return (ft_putnbr_pf(-n, count));
	}
	else
	{
		if (n > 9)
		{
			res = ft_putnbr_pf((n / 10), count);
			if (res == -1)
				return (-1);
		}
		return (ft_putchar_pf((n % 10 + '0'), count));
	}
}
