/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pakowals <pakowals@student.42warsaw.pl>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/02 18:14:19 by pakowals          #+#    #+#             */
/*   Updated: 2025/03/11 14:03:01 by pakowals         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putstr(char *s)
{
	int	count;

	count = 0;
	if (!s)
	{
		write(1, "(null)", 6);
		return (6);
	}
	while (*s != '\0')
	{
		write(1, s++, 1);
		count++;
	}
	return (count);
}
