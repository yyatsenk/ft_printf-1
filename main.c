#include "ft_printf.h"
#include <limits.h>
#include <stdio.h>

int main ()
{
	printf ("|%i|\n",ft_printf ("{%05.c}", 0));
	printf ("|%i|",printf ("{%05.c}", 0));
	return (0);
}
