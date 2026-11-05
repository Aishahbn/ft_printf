/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaninas <abaninas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/05 14:15:22 by abaninas          #+#    #+#             */
/*   Updated: 2026/11/05 14:20:48 by abaninas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>

int	main(void)
{
	ft_printf("String NULL: [%s]\n", (char *) NULL);
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
