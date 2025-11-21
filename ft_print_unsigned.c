/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_unsigned.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zahrabar <zahrabar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/18 18:01:31 by zahrabar          #+#    #+#             */
/*   Updated: 2025/11/21 00:11:50 by zahrabar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_unsigned(unsigned int n)
{
	int	len;

	len = 0;
	if (n >= 10)
	{
		len += ft_print_unsigned(n / 10);
	}
	len += ft_chrprint((n % 10) + 48);
	return (len);
}
