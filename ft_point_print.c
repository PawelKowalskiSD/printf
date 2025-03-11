/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_point_print.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pakowals <pakowals@student.42warsaw.pl>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/07 10:39:11 by pakowals          #+#    #+#             */
/*   Updated: 2025/03/11 22:14:37 by pakowals         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_point_print(void *ptr)
{
	int	count;

	count = 0;
	if (ptr == NULL)
		return (ft_putstr("(nil)"));
	count += ft_putstr("0x");
	count += ft_hex_for_ptr((uintptr_t)ptr);
	return (count);
}
