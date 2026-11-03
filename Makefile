# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dalinein <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/11/02 08:12:16 by dalinein          #+#    #+#              #
#    Updated: 2026/11/02 08:12:23 by dalinein         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

CC = cc
CFLAGS = -Wall -Wextra -Werror

AR = ar rcs
RM = rm -f

SRCS = printf_src/ft_printf.c \
       printf_src/ft_printf_unsigned.c \
       printf_src/ft_printf_char.c \
       printf_src/ft_printf_string.c \
       printf_src/ft_printf_number.c \
       printf_src/ft_printf_hex.c \
       printf_src/ft_printf_pointer.c

OBJS = $(SRCS:.c=.o)

all: $(NAME)

$(NAME): $(OBJS)
	$(AR) $(NAME) $(OBJS)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re