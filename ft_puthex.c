/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pakowals <pakowals@student.42warsaw.pl>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/03 06:27:35 by pakowals          #+#    #+#             */
/*   Updated: 2025/03/03 06:27:35 by pakowals         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

void	ft_puthex(void *ptr)
{
	char		hex[] = "123456789abcdef";
	unsigned	char *s;
	unsigned	char *cpy;
	int count;

	count = 0;

	s = (unsigned char *)ptr;
	cpy = (unsigned char *)ptr;
	
	while(cpy[count] !='\0')
	{

	}
}

int main(void)
{
	char test[] = "12";
	ft_puthex(test);
	return (0);
}