/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaninas <abaninas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/03 17:16:52 by abaninas          #+#    #+#             */
/*   Updated: 2026/11/04 15:20:47 by abaninas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	handle_format(va_list *args, char specifier)
{
	if (!args)
		return (-1);
	if (specifier == 's')
		return (ft_print_string(va_arg(*args, char *)));
	else if (specifier == 'c')
		return (ft_print_char(va_arg(*args, int)));
	else if (specifier == 'd' || specifier == 'i')
		return (ft_print_number(va_arg(*args, int)));
	/*else if (specifier == 'p')
		return (ft_print_number(va_arg(*args, void *)));*/
	else if (specifier == 'u')
		return (ft_print_number(va_arg(*args, unsigned int)));
	else if (specifier == 'x')
		return (ft_print_number(va_arg(*args, unsigned int)));
	else if (specifier == 'X')
		return (ft_print_number(va_arg(*args, unsigned int)));
	else if (specifier == '%')
	{
		write (1, "%", 1);
		return (1);
	}
		return (0);
}

int	ft_printf(const char *format, ...)
{
	int		i;
	int		count;
	va_list	args;

	i = 0;
	count = 0;
	va_start (args, format);
	while (format[i])
	{
		if (format[i] == '%' && format[i + 1])
		{
			count += handle_format(&args, format[i + 1]);
			i += 2;
		}
		else
		{
			write (1, &format[i], 1);
			count++;
			i++;
		}
	}
	va_end(args);
	return (count);
}
