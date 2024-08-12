/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alkaram <alkaram@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/10 20:53:35 by alkaram           #+#    #+#             */
/*   Updated: 2024/01/11 18:44:45 by alkaram          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

void	ft_puthex(unsigned int n, size_t *count, int uppercase)
{
	if (n >= 16)
	{
		ft_puthex(n / 16, count, uppercase);
		n = n % 16;
	}
	if (n <= 9)
		ft_putchar(n + '0', count);
	else
	{
		if (uppercase)
			ft_putchar(n - 10 + 'A', count);
		else
			ft_putchar(n - 10 + 'a', count);
	}
}
