/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putptr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alkaram <alkaram@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 19:05:59 by alkaram           #+#    #+#             */
/*   Updated: 2024/01/10 19:13:17 by alkaram          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

void	ft_puthexa(uintptr_t n, size_t *count)
{
	if (n >= 16)
	{
		ft_puthexa(n / 16, count);
		n = n % 16;
	}
	if (n <= 9)
		ft_putchar(n + '0', count);
	else
		ft_putchar(n - 10 + 'a', count);
}

int	ft_putptr(void *ptr, size_t *count)
{
	uintptr_t	p;

	p = (uintptr_t)ptr;
	*count += write(1, "0x", 2);
	if (ptr == 0)
		*count += write(1, "0", 1);
	else
		ft_puthexa(p, count);
	return (*count);
}
