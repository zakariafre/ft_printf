/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_hex.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zahrabar <zahrabar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/18 18:19:44 by zahrabar          #+#    #+#             */
/*   Updated: 2025/11/21 00:16:27 by zahrabar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_hex(unsigned int n)
{
	int		len;
	char	*hex;

	len = 0;
	hex = "0123456789abcdef";
	if (n >= 16)
		len += ft_print_hex(n / 16);
	len += ft_chrprint(hex[n % 16]);
	return (len);
}
