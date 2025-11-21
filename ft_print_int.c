/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_int.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zahrabar <zahrabar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/18 15:59:46 by zahrabar          #+#    #+#             */
/*   Updated: 2025/11/21 07:25:23 by zahrabar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_nbrprint(int n)
{
	int	len;

	len = 0;
	if (write(1, "", 0) == -1)
		return (-1);
	if (n == -2147483648)
		return (write(1, "-2147483648", 11));
	if (n < 0)
	{
		len += ft_chrprint('-');
		n = -n;
	}
	if (n >= 10)
		len += ft_nbrprint(n / 10);
	len += ft_chrprint((n % 10) + 48);
	return (len);
}
