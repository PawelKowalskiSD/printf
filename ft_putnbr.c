/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pakowals <pakowals@student.42warsaw.pl>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/02 17:51:01 by pakowals          #+#    #+#             */
/*   Updated: 2025/03/02 17:51:01 by pakowals         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "libftprintf.h"

void    ft_putnbr(int num)
{
    if(num == -2147483648)
    {
        ft_putstr("-2147483648");
        return ;
    }
	if(num == 0)
	{
		ft_putchar('0');
		return ;
	}
    if(num < 0)
	{
        ft_putchar('-');
        num = -num;
    }
    if(num > 0)
    {
		if((num / 10) != 0)
        	ft_putnbr(num / 10);
        ft_putchar(num % 10 + '0');
    }
}
