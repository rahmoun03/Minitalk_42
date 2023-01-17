/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printhexa.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arahmoun <arahmoun@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/17 20:54:09 by arahmoun          #+#    #+#             */
/*   Updated: 2023/01/17 20:58:33 by arahmoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printhexa(unsigned long n, const char *h)
{
	int	a;

	a = 0;
	if (n < 16)
	{
		ft_putchar(h[n]);
		a++;
	}
	else if (n >= 16)
	{
		a += ft_printhexa(n / 16, h);
		a += ft_printhexa(n % 16, h);
	}
	return (a);
}
