/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_and_handle_int_and_digit.c                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pakowals <pakowals@student.42warsaw.pl>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/07 13:56:06 by pakowals          #+#    #+#             */
/*   Updated: 2025/03/07 15:25:39 by pakowals         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	ft_check_and_handle_int_and_digit(va_list args)
{
	int	result;

	result = va_arg(args, int);
	return (ft_putnbr(result));
}
