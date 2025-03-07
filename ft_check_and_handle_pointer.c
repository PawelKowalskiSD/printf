/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_and_handle_pointer.c                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pakowals <pakowals@student.42warsaw.pl>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/07 14:08:51 by pakowals          #+#    #+#             */
/*   Updated: 2025/03/07 15:08:04 by pakowals         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	ft_check_and_handle_pointer(va_list args)
{
	int		count;
	void	*ptr;

	count = 0;
	ptr = va_arg(args, void *);
	count += ft_point_print(ptr);
	return (count);
}
