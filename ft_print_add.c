/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_add.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zahrabar <zahrabar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/19 15:54:22 by zahrabar          #+#    #+#             */
/*   Updated: 2025/11/21 00:15:32 by zahrabar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_hex_long(unsigned long n)
{
	int		len;
	char	*hex;

	len = 0;
	hex = "0123456789abcdef";
	if (n >= 16)
		len += ft_print_hex_long(n / 16);
	len += ft_chrprint(hex[n % 16]);
	return (len);
}

int	ft_print_add(void *p)
{
	int				len;
	unsigned long	x;

	len = 0;
	x = (unsigned long)p;
	if (!p)
		return ((ft_strprint("0x0")));
	ft_strprint("0x");
	len = ft_print_hex_long(x);
	return (2 + len);
}
