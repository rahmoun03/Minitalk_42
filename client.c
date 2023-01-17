/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arahmoun <arahmoun@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/17 20:53:58 by arahmoun          #+#    #+#             */
/*   Updated: 2023/01/17 20:58:12 by arahmoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <signal.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

int	main(int ac, char *av[])
{
	int	i;
	int	bit;
	int	pid;

	if (ac != 3)
		return (0);
	i = 0;
	pid = atoi(av[1]);
	ft_printf("%ssend to server:%s %d \n", GREEN, DEFFAULT, pid);
	while (av[2][i])
	{
		bit = 0;
		while (bit < 8)
		{
			if ((av[2][i] & 1 << bit) != 0)
				kill(pid, SIGUSR1);
			else
				kill(pid, SIGUSR2);
			bit++;
			usleep(1250);
		}
		i++;
	}
	return (0);
}
