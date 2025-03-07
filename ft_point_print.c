/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_point_print.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pakowals <pakowals@student.42warsaw.pl>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/07 10:39:11 by pakowals          #+#    #+#             */
/*   Updated: 2025/03/07 15:23:10 by pakowals         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	ft_point_print(void *ptr)
{
	int static	count;
	uintptr_t	address;

	count = 0;
	address = (uintptr_t)ptr;
	if (address != '\0')
	{
		write(1, "0x", 2);
		count += 2;
		count += ft_puthex_lower(address);
	}
	else
		count += ft_putstr("(nil)");
	return (count);
}
