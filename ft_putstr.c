/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alkaram <alkaram@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/06 01:15:06 by alkaram           #+#    #+#             */
/*   Updated: 2024/01/09 18:59:22 by alkaram          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

void	ft_putstr(char *str, size_t *count)
{
	if (!str)
		str = "(null)";
	while (*str)
		ft_putchar(*str++, count);
}
