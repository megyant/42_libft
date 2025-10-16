# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mbotelho <mbotelho@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/10/16 09:43:34 by mbotelho          #+#    #+#              #
#    Updated: 2025/10/16 10:30:26 by mbotelho         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
FT = ft_
SRCS = $(FT)isalpha.c \
	   $(FT)ft_isdigit.c \
	   $(FT)isalnum.c \
	   $(FT)isascii.c \
	   $(FT)isprint.c
CC = cc
FLAGS = -Wall -Werror -Wextra
OBJS = $(SRCS:.c=.o)
INC_DIRS = 
RM = rm -f

.c.o:
	$(CC) $(CFLAGS) -c $< -o $(<:.c=.o) -I $(INC_DIRS)

$(NAME): $(OBJS)
	ar rc $(NAME) $(OBJS)

all: $(NAME)

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re