/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_pf.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymazini <ymazini@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 14:29:06 by ymazini           #+#    #+#             */
/*   Updated: 2024/11/25 23:07:41 by ymazini          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putstr_pf(char *str, size_t *count)
{
	int	res;

	if (!str)
		str = "(null)";
	while (*str)
	{
		res = ft_putchar_pf(*str, count);
		if (res == -1)
			return (-1);
		str++;
	}
	return (0);
}
