/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zahrabar <zahrabar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/17 18:05:17 by zahrabar          #+#    #+#             */
/*   Updated: 2025/11/21 06:20:59 by zahrabar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>

int		ft_printf(const char *param, ...);
int		ft_chrprint(char c);
int		ft_nbrprint(int n);
int		ft_strprint(char *s);
int		ft_print_unsigned(unsigned int n);
int		ft_print_hex(unsigned int n);
int		ft_print_uphex(unsigned int n);
int		ft_print_add(void *p);

#endif