/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_unsigned_int.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pakowals <pakowals@student.42warsaw.pl>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/03 17:33:16 by pakowals          #+#    #+#             */
/*   Updated: 2025/03/11 20:00:31 by pakowals         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_put_unsigned_int(unsigned int num)
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
	count = ft_putstr(s);
	free(s);
	return (count);
}
