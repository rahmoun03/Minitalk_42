/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arahmoun <arahmoun@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/17 20:54:18 by arahmoun          #+#    #+#             */
/*   Updated: 2023/01/17 20:58:43 by arahmoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putstr(const char *str)
{
	int	a;

	if (str == NULL)
	{
		write(1, "(null)", 6);
		return (6);
	}
	a = ft_strlen(str);
	while (*str != '\0')
	{
		write(1, str, 1);
		str++;
	}
	return (a);
}
