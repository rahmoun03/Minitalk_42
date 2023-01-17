#include "unistd.h"
#include "ft_printf.h"
#include "stdio.h"
#include <signal.h>
#include <math.h>


void    handler_1(int seg)
{
    static int i;
    static int bit;
    if (seg == SIGUSR1)
    {
        i += 1 * (int)pow(2, bit);
        bit++;
    }
    else if (seg == SIGUSR2)
        bit++;
    
    if(bit == 8)
    {
        write(1, &i, 1);
        bit = 0;
        i = 0;
    }
}

int main(void)
{
    pid_t pid = getpid();
    ft_printf("my pid : %d \n", pid);
    signal(SIGUSR1, handler_1);
    signal(SIGUSR2, handler_1);
    while (1)
        pause();
    return 0;
}