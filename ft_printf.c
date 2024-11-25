/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymazini <ymazini@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 14:19:20 by ymazini           #+#    #+#             */
/*   Updated: 2024/11/25 23:06:04 by ymazini          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_format_pf(va_list ap, char *str, size_t *count)
{
	if (*str == 'c')
		return (ft_putchar_pf(va_arg(ap, int), count));
	else if (*str == 's')
		return (ft_putstr_pf(va_arg(ap, char *), count));
	else if (*str == 'd' || *str == 'i')
		return (ft_putnbr_pf(va_arg(ap, int), count));
	else if (*str == 'x' || *str == 'X')
		return (ft_puthex_pf(va_arg(ap, unsigned int), count, *str));
	else if (*str == 'u')
		return (ft_putunbr_pf(va_arg(ap, unsigned int), count));
	else if (*str == 'p')
		return (ft_putadr_pf(va_arg(ap, unsigned long), count));
	else if (*str == '%')
		return (ft_putchar_pf(*str, count));
	return (0);
}

int	ft_printf(const char *str, ...)
{
	va_list	ap;
	size_t	counter;
	int		result;

	if (!str)
		return (-1);
	counter = 0;
	va_start(ap, str);
	while (*str)
	{
		if (*str == '%' && (++str))
		{
			result = ft_format_pf(ap, (char *)str, &counter);
			if (result == -1)
				return (va_end(ap), -1);
		}
		else
		{
			result = ft_putchar_pf(*str, &counter);
			if (result == -1)
				return (va_end(ap), -1);
		}
		str++;
	}
	return (va_end (ap), counter);
}
