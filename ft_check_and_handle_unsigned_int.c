/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_and_handle_unsigned_int.c                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pakowals <pakowals@student.42warsaw.pl>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/07 13:42:11 by pakowals          #+#    #+#             */
/*   Updated: 2025/03/07 15:25:27 by pakowals         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	ft_check_and_handle_unsigned_int(va_list args)
{
	unsigned int	result;

	result = va_arg(args, unsigned int);
	return (ft_put_unsigned_int(result));
}
