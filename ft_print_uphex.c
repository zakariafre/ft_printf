/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_uphex.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zahrabar <zahrabar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/19 13:10:30 by zahrabar          #+#    #+#             */
/*   Updated: 2025/11/21 00:18:08 by zahrabar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_uphex(unsigned int n)
{
	int		len;
	char	*hex;

	len = 0;
	hex = "0123456789ABCDEF";
	if (n >= 16)
		len += ft_print_uphex(n / 16);
	len += ft_chrprint(hex[n % 16]);
	return (len);
}
