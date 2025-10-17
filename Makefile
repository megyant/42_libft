# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: megyant <megyant@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/10/16 09:43:34 by mbotelho          #+#    #+#              #
#    Updated: 2025/10/17 15:40:22 by megyant          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
FT = ft_
SRCS = $(FT)isalpha.c \
	   $(FT)isdigit.c \
	   $(FT)isalnum.c \
	   $(FT)isascii.c \
	   $(FT)isprint.c \
	   $(FT)strlen.c \
	   $(FT)memset.c
CC = cc
FLAGS = -Wall -Werror -Wextra
OBJS = $(SRCS:.c=.o)
RM = rm -f

.c.o:
	$(CC) $(CFLAGS) -c $< -o $(<:.c=.o)

$(NAME): $(OBJS)
	ar rc $(NAME) $(OBJS)

all: $(NAME)

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re