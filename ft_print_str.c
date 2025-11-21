/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_str.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zahrabar <zahrabar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/18 15:57:04 by zahrabar          #+#    #+#             */
/*   Updated: 2025/11/21 00:17:36 by zahrabar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_strprint(char *s)
{
	int	len;

	len = 0;
	if (!s)
		return (ft_strprint("(null)"));
	while (s[len])
	{
		write(1, &s[len], 1);
		len++;
	}
	return (len);
}
