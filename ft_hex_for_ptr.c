/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hex_for_ptr.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pakowals <pakowals@student.42warsaw.pl>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/11 21:53:20 by pakowals          #+#    #+#             */
/*   Updated: 2025/03/11 22:24:51 by pakowals         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_hex_for_ptr(uintptr_t num)
{
	int	count;

	count = 0;
	if (num >= 16)
		count += ft_hex_for_ptr(num / 16);
	if ((num % 16) < 10)
		count += ft_putchar((num % 16) + '0');
	else
		count += ft_putchar((num % 16) - 10 + 'a');
	return (count);
}
