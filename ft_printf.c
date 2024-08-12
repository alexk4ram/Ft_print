/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alkaram <alkaram@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/08 17:02:55 by alkaram           #+#    #+#             */
/*   Updated: 2024/01/14 09:13:06 by alkaram          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

void	ft_printformat(va_list ap, char *specifier, size_t *count)
{
	if (*specifier == 'c')
		ft_putchar(va_arg(ap, int), count);
	else if (*specifier == 's')
		ft_putstr(va_arg(ap, char *), count);
	else if (*specifier == 'i' || *specifier == 'd')
		ft_putnbr(va_arg(ap, int), count);
	else if (*specifier == '%')
		ft_putchar(*specifier, count);
	else if (*specifier == 'p')
		ft_putptr(va_arg(ap, void *), count);
	else if (*specifier == 'u')
		ft_putuint(va_arg(ap, unsigned int), count);
	else if (*specifier == 'x' || *specifier == 'X')
	{
		if (*specifier == 'x')
			ft_puthex(va_arg(ap, unsigned int), count, 0);
		else if (*specifier == 'X')
			ft_puthex(va_arg(ap, unsigned int), count, 1);
	}
}

int	ft_printf(char const *format, ...)
{
	va_list	ap;
	size_t	count;

	if (!format)
		return (-1);
	va_start(ap, format);
	count = 0;
	while (*format)
	{
		if (*format == '%')
		{
			format++;
			ft_printformat(ap, (char *)format, &count);
		}
		else
			ft_putchar(*format, &count);
		format++;
	}
	va_end(ap);
	return (count);
}

// int	main(void)
// {
// 	char			c;
// 	int				n;
// 	char			*s;
// 	char			*p;
// 	uintptr_t		p_address;
// 	unsigned int	u;
// 	unsigned int	x;
// 	unsigned int	X;
// 	int				return1;
// 	int				return2;

// 	x = 893;
// 	X = 3793;
// 	u = 73983;
// 	p = "\t";
// 	p_address = (uintptr_t)p;
// 	s = "";
// 	n = 56;
// 	c = 'a';
// 	return1 = printf("the original function displays a character"
// // 	return2 = ft_printf("%the built in function displays a character"
// // 	printf("Original returns %i and mine returns %i", return1, return2);
// // 	// printf("the original function displays a number %d\n", n);
// // 	// ft_printf("the built in function displays a number %d\n", n);
// // 	// printf("the original function displays a string %s\n", s);
// // 	// ft_printf("the built in function displays a string %s\n", s);
// // 	// printf("the original function displays a pointer %p\n", p);
// // 	// ft_printf("the built in function displays a pointer %p\n", p);
// // 	// printf("the original function displays an unsigned int %u\n", u);
// // 	// ft_printf("the built in function displays an unsigned int %u\n", u);
// // 	// printf("the original function displays a hexadecimal %x\n", x);
// // 	// ft_printf("the built in function displays a hexadecimal %x\n", x);
// // 	// printf("the original function displays a hexadecimal %x\n", X);
// // 	// ft_printf("the built in function displays a hexadecimal %x\n", X);
// // 	return (0);
// // }
