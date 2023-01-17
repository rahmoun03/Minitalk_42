
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
