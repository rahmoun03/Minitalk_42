#include <unistd.h>
#include "ft_printf.h"
#include <stdio.h>
#include <signal.h>
#include <math.h>

int main()
{

    pid_t pid = getpid();
    printf("my pid : %d \n", pid);
    printf("& : %d \n", (int)pow(2, 0));
    return 0;
}
//   0000 1100
// 000000 01