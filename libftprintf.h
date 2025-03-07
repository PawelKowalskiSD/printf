/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libftprintf.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pakowals <pakowals@student.42warsaw.pl>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/01 17:50:18 by pakowals          #+#    #+#             */
/*   Updated: 2025/03/03 14:21:10 by pakowals         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFTPRINTF_H
# define LIBFTPRINTF_H

# include <stdint.h>
# include <stdlib.h>
# include <stdarg.h>
# include <stdio.h>
# include <unistd.h>

int		ft_printf(const	char *s, ...);
void	ft_putchar(char s);
void	ft_putnbr(int num);
void	ft_putstr(char *s);
void	ft_puthex(int num, char c);
void    ft_put_unsigned_int(unsigned int num);
void    ft_point_print(void *ptr);
// char	ft_tolower(int c);

#endif