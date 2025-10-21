# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mbotelho <mbotelho@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/10/20 11:18:52 by mbotelho          #+#    #+#              #
#    Updated: 2025/10/21 10:46:00 by mbotelho         ###   ########.fr        #
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
	   $(FT)memset.c \
	   $(FT)bzero.c \
       $(FT)memcpy.c \
	   $(FT)memmove.c \
	   $(FT)strlcpy.c \
	   $(FT)strlcat.c \
	   $(FT)strchr.c \
	   $(FT)strrchr.c \
	   $(FT)strncmp.c

CC = cc
FLAGS = -Wall -Werror -Wextra
OBJS = $(SRCS:.c=.o)
RM = rm -f

.c.o:
	$(CC) $(FLAGS) -c $< -o $(<:.c=.o)

$(NAME): $(OBJS)
	ar rc $(NAME) $(OBJS)

all: $(NAME)

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re