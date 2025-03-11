/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_digit.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pakowals <pakowals@student.42warsaw.pl>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/11 16:43:51 by pakowals          #+#    #+#             */
/*   Updated: 2025/03/11 17:15:08 by pakowals         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_count_digit(unsigned int n)
{
	int	count;

	count = 1;
	if (n < 0)
		count++;
	while ((n / 10) != 0)
	{
		n /= 10;
		count++;
	}
	return (count);
}
