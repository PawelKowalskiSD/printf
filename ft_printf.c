/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pakowals <pakowals@student.42warsaw.pl>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/01 17:46:20 by pakowals          #+#    #+#             */
/*   Updated: 2025/03/11 22:26:02 by pakowals         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *s, ...)
{
	va_list	args;
	int		count;
	int		count_char;

	count_char = 0;
	count = 0;
	va_start(args, s);
	while (s[count] != '\0')
	{
		if (s[count] == '%')
		{
			count++;
			count_char = ft_check_format(args, s, count, count_char);
		}
		else
		{
			ft_putchar(s[count]);
			count_char++;
		}
		count++;
	}
	va_end(args);
	return (count_char);
}
