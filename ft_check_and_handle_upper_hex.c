/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_and_handle_upper_hex.c                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pakowals <pakowals@student.42warsaw.pl>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/07 14:56:36 by pakowals          #+#    #+#             */
/*   Updated: 2025/03/11 14:03:41 by pakowals         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_check_and_handle_upper_hex(va_list args)
{
	int	result;

	result = va_arg(args, int);
	return (ft_puthex_upper(result));
}
