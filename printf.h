/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alkaram <alkaram@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/05 19:42:49 by alkaram           #+#    #+#             */
/*   Updated: 2024/01/14 12:23:37 by alkaram          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRINTF_H
# define PRINTF_H

# define FT_INT_MIN -2147483648
# define FT_INT_MAX 2147483647

# include <stdarg.h>
# include <stdint.h>
# include <stdio.h>
# include <stdlib.h>
# include <string.h>
# include <unistd.h>

void	ft_putchar(char c, size_t *count);
void	ft_putnbr(int n, size_t *count);
void	ft_putstr(char *str, size_t *count);
void	ft_printformat(va_list ap, char *specifier, size_t *count);
int		ft_printf(char const *format, ...);
int		ft_putptr(void *ptr, size_t *count);
void	ft_puthex(unsigned int n, size_t *count, int uppercase);
void	ft_putuint(unsigned int n, size_t *count);
void	ft_puthexa(uintptr_t n, size_t *count);

#endif
