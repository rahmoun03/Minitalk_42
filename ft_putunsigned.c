/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putunsigned.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arahmoun <arahmoun@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/17 20:54:20 by arahmoun          #+#    #+#             */
/*   Updated: 2023/01/17 20:58:46 by arahmoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putunsigned(unsigned int n)
{
	int	a;

	a = 0;
	if (n <= 9 && n >= 0)
	{
		ft_putchar(n + '0');
		a++;
	}
	else
	{
		a += ft_putunsigned(n / 10);
		a += ft_putunsigned(n % 10);
	}
	return (a);
}
