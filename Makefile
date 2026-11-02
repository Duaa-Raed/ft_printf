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

LIBFT_DIR = libft
LIBFT = $(LIBFT_DIR)/libft.a

SRCS = src/ft_printf.c \ src/ft_printf_utils.c \ src/ft_printf_char.c \ src/ft_printf_string.c \ src/ft_printf.c \ src/ft_printf_number.c \ src/ft_printf_hex.c

OBJS = $(SRCS:.c=.o)

all: $(NAME)

libft_build :
	$(MAKE) -C $(LIBFT_DIR)

$(NAME): $(OBJS) libft_build
 rm -rf .libft_tmp
 mkdir 	.libft_tmp
 cd .libft_tmp 