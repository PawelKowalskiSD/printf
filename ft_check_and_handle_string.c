/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_and_handle_string.c                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pakowals <pakowals@student.42warsaw.pl>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/07 13:23:48 by pakowals          #+#    #+#             */
/*   Updated: 2025/03/11 14:03:47 by pakowals         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_check_and_handle_string(va_list args)
{
	char	*result;

	result = va_arg(args, char *);
	return (ft_putstr(result));
}
