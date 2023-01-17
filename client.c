#include <unistd.h>
#include "ft_printf.h"
#include <stdio.h>
#include <signal.h>
#include <string.h>
#include <stdlib.h>

int main(int ac, char *av[])
{
    if(ac != 3)
        return 0;
    int i = 0;
    int bit = 0;
    pid_t pid = atoi(av[1]);
    ft_printf("%ssend to server:%s %d \n", GREEN, DEFFAULT,pid);
    while (av[2][i])
    {
        bit = 0;
        while (bit < 8)
        {
            if((av[2][i] & 1 << bit) != 0)
                kill(pid, SIGUSR1);
            else
                kill(pid, SIGUSR2);
            bit++;
            usleep(1250);
        }
        i++;
    }
    return 0;
}