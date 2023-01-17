/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arahmoun <arahmoun@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/17 20:54:05 by arahmoun          #+#    #+#             */
/*   Updated: 2023/01/17 20:58:27 by arahmoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <stdarg.h>
# include <stdlib.h>
# include <unistd.h>
# define RED "\033[7m\033[31m"
# define DEFFAULT "\033[1m"
# define GREEN "\033[7m\033[32m"
# define YOLLOW "\033[7m\033[33m"

int	ft_printf(const char *str, ...);
int	ft_strlen(const char *str);
int	ft_putstr(const char *str);
int	ft_putchar(char c);
int	ft_putnbr(int n);
int	ft_putunsigned(unsigned int n);
int	ft_printhexa(unsigned long n, const char *h);

#endif
