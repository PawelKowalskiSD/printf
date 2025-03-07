/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libftprintf.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pakowals <pakowals@student.42warsaw.pl>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/01 17:50:18 by pakowals          #+#    #+#             */
/*   Updated: 2025/03/07 16:05:51 by pakowals         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFTPRINTF_H
# define LIBFTPRINTF_H

# include <stdint.h>
# include <stdlib.h>
# include <stdarg.h>
# include <stdio.h>
# include <unistd.h>

int		ft_printf(const	char *s, ...);
int		ft_check_and_handle_char(va_list args);
int		ft_check_and_handle_string(va_list args);
int		ft_check_and_handle_unsigned_int(va_list args);
int		ft_check_and_handle_int_and_digit(va_list args);
int		ft_check_and_handle_pointer(va_list args);
int		ft_check_and_handle_lower_hex(va_list args);
int		ft_check_and_handle_upper_hex(va_list args);
int		ft_putchar(char s);
int		ft_put_unsigned_int(unsigned int num);
int		ft_putnbr(int num);
int		ft_putstr(char *s);
int		ft_puthex_lower(uintptr_t num);
int		ft_point_print(void *ptr);
int		ft_puthex_upper(uintptr_t num);
int		ft_check_format(va_list args, const char *s, int count, int count_char);

#endif