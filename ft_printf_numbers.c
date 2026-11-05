/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_numbers.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaninas <abaninas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/05 13:33:40 by abaninas          #+#    #+#             */
/*   Updated: 2026/11/05 13:33:50 by abaninas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	print_digits(unsigned int n)
{
	int	count;

	count = 0;
	if (n >= 10)
		count += print_digits(n / 10);
	count += ft_print_char((n % 10) + '0');
	return (count);
}

int	ft_print_number(int n)
{
	unsigned int	number;
	int				count;

	count = 0;
	if (n < 0)
	{
		write(1, "-", 1);
		count++;
		number = 0U - (unsigned int)n;
	}
	else
		number = (unsigned int)n;
	count += print_digits(number);
	return (count);
}

int	ft_print_unsigned(unsigned int n)
{
	return (print_digits(n));
}

static int	print_hex_digits(unsigned long n, const char *base)
{
	int	count;

	count = 0;
	if (n >= 16)
		count += print_hex_digits(n / 16, base);
	count += ft_print_char(base[n % 16]);
	return (count);
}

int	ft_print_hex(unsigned int n, int uppercase)
{
	if (uppercase)
		return (print_hex_digits(n, "0123456789ABCDEF"));
	return (print_hex_digits(n, "0123456789abcdef"));
}

int	ft_print_pointer(void *ptr)
{
	unsigned long	address;
	int				count;

	if (!ptr)
		return (ft_print_string("(nil)"));
	address = (unsigned long)ptr;
	write(1, "0x", 2);
	count = 2;
	count += print_hex_digits(address, "0123456789abcdef");
	return (count);
}