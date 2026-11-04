#include "ft_printf.h"
#include <stdio.h>

int	main(void)
{
	// int n;
	// unsigned int u;

	// n = -42;
	// u = 42;

	ft_printf("string null: [%s]\n", (char *)NULL);
	//ft_printf("Hello %a world\n","my awseom 42" );
	ft_printf("%%c: %c\n", 'A');
	ft_printf("%%s: %s\n", "Hello 42");
	ft_printf("%%d: %d\n", "dd");
	ft_printf("%%i: %i\n", "dg");
	//ft_printf("%%p: %p\n",(void *)&n);
	ft_printf("%%u: %u\n", "abc");
	ft_printf("%%x: %x\n", 15);
	ft_printf("%%X: %X\n", 15);
	ft_printf("%%: %%\n");
	return(0);
}