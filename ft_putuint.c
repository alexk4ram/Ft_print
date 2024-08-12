/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putuint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alkaram <alkaram@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/10 20:24:24 by alkaram           #+#    #+#             */
/*   Updated: 2024/01/10 20:31:51 by alkaram          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

void	ft_putuint(unsigned int n, size_t *count)
{
	if (n >= 10)
	{
		ft_putuint(n / 10, count);
		n = n % 10;
	}
	ft_putchar(n + '0', count);
}
