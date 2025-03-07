/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pakowals <pakowals@student.42warsaw.pl>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/01 17:46:20 by pakowals          #+#    #+#             */
/*   Updated: 2025/03/03 14:42:39 by pakowals         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

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
			if (s[count] == 'c')
			{
				char result = (char)va_arg(args, int);
				ft_putchar(result);
				count_char++;
			}
			if (s[count] == 's')
			{
				char *result = va_arg(args, char *);
				ft_putstr(result);
				count_char++;
			}
			if (s[count] == '%')
			{
				ft_putchar('%');
			}
			if (s[count] == 'p')
			{
				void *ptr = va_arg(args, void *);
				// ft_point_print(ptr);
			}
			if (s[count] == 'x')
			{
				int result = va_arg(args, int);
				ft_puthex(result, 'x');
			}
			if (s[count] == 'X')
			{
				int result = va_arg(args, int);
				ft_puthex(result, 'X');
			}
			if (s[count] == 'u')
			{
				unsigned int result = va_arg(args, unsigned int);
				ft_put_unsigned_int(result);
			}
			if (s[count] == 'd' || s[count] == 'i')
			{
				int result = va_arg(args, int);
				ft_putnbr(result);
				int counter = 0;
				if(result < 0)
				{
					result = -result;
					count_char++;
				}
				while(result > 0)
				{
					result = result / 10;
					counter++;
				}
				count_char = count_char + counter;
			}
			count_char++;
			count++;
		}
		else
		{
		ft_putchar(s[count]);
		count++;
		count_char++;
		}
	}
	va_end(args);
	return (count_char);
}

int	main(void) 
{
	int m_result = ft_printf("ale: %d%% a teraz: %c  cos %s no to to: %s %u", 123421567, 'T', "ABC", "ABC", 123);
	printf("\n");
	printf("m_result: %i", m_result);
	printf("\n");
	int o_result = printf("ale: %d%% a teraz: %c  cos %s no to to: %s %u", 123421567, 'T', "ABC", "ABC", 123);
	printf("\n");
	printf("o_result: %i", o_result);
	return (0);
}
