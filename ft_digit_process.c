/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_digit_process.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pakowals <pakowals@student.42warsaw.pl>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/11 19:32:59 by pakowals          #+#    #+#             */
/*   Updated: 2025/03/11 19:47:01 by pakowals         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

char	*ft_digit_process(int num)
{
	int		count;
	char	*s;

	count = ft_count_digit(num);
	s = malloc((count + 1) * sizeof(char));
	if (!s)
		return (0);
	s[count] = '\0';
	while (count--)
	{
		s[count] = (num % 10) + '0';
		num /= 10;
	}
	return (s);
}
