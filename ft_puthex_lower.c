/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex_lower.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pakowals <pakowals@student.42warsaw.pl>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/07 13:07:35 by pakowals          #+#    #+#             */
/*   Updated: 2025/03/11 22:08:19 by pakowals         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_puthex_lower(unsigned int num)
{
	int	count;

	count = 0;
	if (num >= 16)
		count += ft_puthex_lower(num / 16);
	if ((num % 16) < 10)
		count += ft_putchar((num % 16) + '0');
	else
		count += ft_putchar((num % 16) - 10 + 'a');
	return (count);
}
