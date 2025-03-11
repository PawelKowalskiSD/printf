/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_and_handle_unsigned_int.c                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pakowals <pakowals@student.42warsaw.pl>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/07 13:42:11 by pakowals          #+#    #+#             */
/*   Updated: 2025/03/11 14:03:44 by pakowals         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_check_and_handle_unsigned_int(va_list args)
{
	unsigned int	result;

	result = va_arg(args, unsigned int);
	return (ft_put_unsigned_int(result));
}
