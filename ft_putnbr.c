/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arahmoun <arahmoun@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/17 20:54:15 by arahmoun          #+#    #+#             */
/*   Updated: 2023/01/17 20:58:40 by arahmoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr(int n)
{
	int	a;

	a = 0;
	if (n == -2147483648)
	{
		a += ft_putstr((char *)"-2147483648");
		return (a);
	}
	if (n < 0)
	{
		a += ft_putchar('-');
		n *= -1;
	}
	if (n <= 9 && n >= 0)
		a += ft_putchar(n + '0');
	else
	{
		a += ft_putnbr(n / 10);
		a += ft_putnbr(n % 10);
	}
	return (a);
}
