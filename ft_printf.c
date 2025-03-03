/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pakowals <pakowals@student.42warsaw.pl>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/01 17:46:20 by pakowals          #+#    #+#             */
/*   Updated: 2025/03/01 17:46:20 by pakowals         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	ft_printf(const char *text, ...)
{
	va_list args;
	va_start(args, text);

	int	result = va_arg(args, int);
	va_end(args);
    return (result);
}

int main(void) 
{
	// ft_printf("cos %i", 2147483648);
	// printf("%d", 2147483648);
	void *ptr;
	ptr = "a";
	printf("%p", ptr);
	return (0);
}