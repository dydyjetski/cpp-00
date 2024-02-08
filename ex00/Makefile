# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dmeurant <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/27 09:08:49 by dmeurant          #+#    #+#              #
#    Updated: 2023/11/27 09:08:50 by dmeurant         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = megaphone

SRCS = megaphone.cpp

OBJ = ${SRCS:.cpp=.o}

CC = c++ -std=c++98

CFLAGS = -Wall -Wextra -Werror

.c.o:
	@$(CC) $(CFLAGS) -c $< -o $(<:.c=.o)

$(NAME): $(OBJ)
	@$(CC) $(OBJ) $(CFLAGS) -o $(NAME)

all: ${NAME}

clean:
	@rm -f $(OBJ)

fclean:	clean
	@rm -f ${NAME}

re: fclean all

.PHONY: all clean fclean re
