/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_and_handle_lower_hex.c                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pakowals <pakowals@student.42warsaw.pl>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/07 14:49:39 by pakowals          #+#    #+#             */
/*   Updated: 2025/03/07 14:53:19 by pakowals         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	ft_check_and_handle_lower_hex(va_list args)
{
	int	result;

	result = va_arg(args, int);
	return (ft_puthex_lower(result));
}
