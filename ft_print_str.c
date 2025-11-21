/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_str.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zahrabar <zahrabar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/18 15:57:04 by zahrabar          #+#    #+#             */
/*   Updated: 2025/11/21 07:25:38 by zahrabar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_strprint(char *s)
{
	int	len;

	len = 0;
	if (write(1, "", 0) == -1)
		return (-1);
	if (!s)
	{
		write(1, "(null)", 6);
		return (6);
	}
	while (s[len])
	{
		write(1, &s[len], 1);
		len++;
	}
	return (len);
}
