/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zahrabar <zahrabar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/18 15:40:00 by zahrabar          #+#    #+#             */
/*   Updated: 2025/11/21 06:25:18 by zahrabar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	format_case(char param, va_list *list)
{
	int	n;

	n = 0;
	if (param == 'c')
		n += ft_chrprint((char)va_arg(*list, int));
	else if (param == 's')
		n += ft_strprint(va_arg(*list, char *));
	else if (param == 'd' || param == 'i')
		n += ft_nbrprint(va_arg(*list, int));
	else if (param == 'u')
		n += ft_print_unsigned(va_arg(*list, unsigned int));
	else if (param == 'x')
		n += ft_print_hex(va_arg(*list, unsigned int));
	else if (param == 'X')
		n += ft_print_uphex(va_arg(*list, unsigned int));
	else if (param == 'p')
		n += ft_print_add(va_arg(*list, void *));
	return (n);
}

int	ft_printf(const char *param, ...)
{
	va_list	list;
	int		i;
	int		n;

	va_start(list, param);
	i = 0;
	n = 0;
	while (param[i])
	{
		if (param[i] == '%' && param[i + 1] == '%')
		{
			n += ft_chrprint('%');
			i++;
		}
		else if (param[i] == '%' && param[i + 1])
		{
			i++;
			n += format_case(param[i], &list);
		}
		else
			n += ft_chrprint(param[i]);
		i++;
	}
	va_end(list);
	return (n);
}
