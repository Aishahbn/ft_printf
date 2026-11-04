#include "ft_printf.h"

static int print_digits(unsigned int n)
{
	int count;

	count = 0;
	if(n >= 10)
			count += print_digits(n / 10);
		count += ft_print_char((n % 10) + '0');
		return (count);
}
	int ft_print_number(int n)
	{
		unsigned int number;
		int			count;
		
		count = 0;
		if (n < 0)
		{
			write (1, "-", 1);
			count++;
			number = 0U - (unsigned int)n;
		}
		else
		number = (unsigned int)n;
	count += print_digits(number);
	return (count);
	}
