/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymazini <ymazini@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 14:30:22 by ymazini           #+#    #+#             */
/*   Updated: 2024/11/25 22:56:33 by ymazini          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>

# define LOW_HEX "0123456789abcdef"
# define UPP_HEX "0123456789ABCDEF"

int		ft_printf(char const *str, ...);

int		ft_putchar_pf(char c, size_t *count);
int		ft_puthex_pf(unsigned long nbr, size_t *count, char c);
int		ft_putnbr_pf(int n, size_t *count);
int		ft_putstr_pf(char *str, size_t *count);
int		ft_putunbr_pf(unsigned long n, size_t *count);
int		ft_putadr_pf(unsigned long n, size_t *count);

#endif