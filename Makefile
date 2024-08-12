# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: alkaram <alkaram@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/01/05 22:12:49 by alkaram           #+#    #+#              #
#    Updated: 2024/01/11 18:52:04 by alkaram          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

C = gcc
AR = ar
NAME = libftprintf.a
ARFLAGS = rc
CFLAGS = -Wall -Werror -Wextra
SRCFILES =	ft_printf.c \
			ft_putchar.c \
			ft_putnbr.c \
			ft_putstr.c \
			ft_putptr.c \
			ft_putuint.c \
			ft_puthex.c \
		
OBJFILES = ${SRCFILES:.c=.o}
.c.o :
	$(CC) $(CFLAGS) -c $< -o $(<:.c=.o)
$(NAME) : $(OBJFILES)
	$(AR) $(ARFLAGS) $(NAME) $(OBJFILES)
all : $(NAME)
fclean : clean
	rm -rf $(NAME)
clean :
	rm -rf $(OBJFILES)
re : fclean $(NAME)
.PHONY: all clean fclean re
