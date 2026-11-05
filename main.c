#include "ft_printf.h"
#include <stdio.h>

int	main(void)
{
	ft_printf("String NULL: [%s]\n", (char *)NULL);
	ft_printf("%%c: %c\n", 'A');
	ft_printf("%%s: %s\n", "Hello 42");
	ft_printf("%%d: %d\n", -25);
	ft_printf("%%i: %i\n", 255);
	ft_printf("%%u: %u\n", 34);
	ft_printf("%%p: %p\n", (void *)32);
	ft_printf("%%x: %x\n", 15);
	ft_printf("%%X: %X\n", 15);
	ft_printf("%%: %%\n");
	return (0);
}