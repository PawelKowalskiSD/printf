/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pakowals <pakowals@student.42warsaw.pl>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/03 06:27:35 by pakowals          #+#    #+#             */
/*   Updated: 2025/03/03 14:34:46 by pakowals         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

void	ft_puthex(int num, char c)
{
	int	result;

	if (num == 0)
		return ;
	if (num > 0)
	{
		result = num % 16;
		ft_puthex(num / 16, c);
		if (result < 10)
			ft_putchar(result + '0');
		if (result >= 10 && c == 'x')
			ft_putchar(result + 39 + '0');
		if (result >= 10 && c == 'X')
			ft_putchar(result + 7 + '0');
	}
}
