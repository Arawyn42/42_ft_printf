/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drenassi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 15:37:53 by drenassi          #+#    #+#             */
/*   Updated: 2023/10/12 17:57:43 by drenassi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdarg.h>

int		ft_putchar(char c);
int		ft_putstr(char *s);
void	ft_pointer(unsigned long ptr, int *size);
void	ft_putnbr(int n, int *size);
void	ft_putunbr(unsigned int n, int *size);
void	ft_puthexnbr(unsigned long n, int *size, char *base);
int		ft_printf(const char *input, ...);

#endif