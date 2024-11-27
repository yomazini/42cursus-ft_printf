/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putadr_pf.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymazini <ymazini@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 22:00:28 by ymazini           #+#    #+#             */
/*   Updated: 2024/11/26 17:26:42 by ymazini          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putadr_pf(unsigned long n, size_t *count)
{
	int	res;

	res = ft_putstr_pf("0x", count);
	if (res == -1)
		return (-1);
	return (ft_puthex_pf(n, count, 'x'));
}
