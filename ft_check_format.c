/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_format.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pakowals <pakowals@student.42warsaw.pl>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/07 15:34:33 by pakowals          #+#    #+#             */
/*   Updated: 2025/03/11 22:24:25 by pakowals         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_check_format(va_list args, const char *s, int count, int count_char)
{
	if (s[count] == 'c')
		count_char += ft_check_and_handle_char(args);
	if (s[count] == 's')
		count_char += ft_check_and_handle_string(args);
	if (s[count] == '%')
		count_char += ft_putchar('%');
	if (s[count] == 'p')
		count_char += ft_check_and_handle_pointer(args);
	if (s[count] == 'x')
		count_char += ft_check_and_handle_lower_hex(args);
	if (s[count] == 'X')
		count_char += ft_check_and_handle_upper_hex(args);
	if (s[count] == 'u')
		count_char += ft_check_and_handle_unsigned_int(args);
	if (s[count] == 'd' || s[count] == 'i')
		count_char += ft_check_and_handle_int_and_digit(args);
	return (count_char);
}
