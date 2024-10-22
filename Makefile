# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aliobreg <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/04/01 17:15:55 by aliobreg          #+#    #+#              #
#    Updated: 2024/04/10 15:44:34 by aliobreg         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
CC = gcc
RM = rm -f
FLAGS = -Wall -Wextra -Werror

SRC = ft_isdigit.c ft_putchar_fd.c ft_strjoin.c ft_strtrim.c ft_isprint.c\
		ft_putendl_fd.c ft_strlcat.c ft_substr.c ft_atoi.c ft_itoa.c\
		ft_putnbr_fd.c ft_strlcpy.c ft_tolower.c ft_bzero.c ft_memchr.c\
		ft_putstr_fd.c	ft_strlen.c	ft_toupper.c ft_calloc.c ft_memcmp.c\
		ft_split.c ft_strmapi.c ft_isalnum.c ft_memcpy.c ft_strchr.c\
		ft_strncmp.c ft_isalpha.c ft_memmove.c ft_strdup.c ft_strnstr.c\
		ft_isascii.c ft_memset.c ft_striteri.c ft_strrchr.c

BONUSSRC = ft_lstadd_back_bonus.c ft_lstadd_front_bonus.c ft_lstclear_bonus.c\
				ft_lstdelone_bonus.c ft_lstiter_bonus.c ft_lstlast_bonus.c\
				ft_lstmap_bonus.c ft_lstnew_bonus.c ft_lstsize_bonus.c

OBJ = $(SRC:.c=.o)
BONUSOBJ = $(BONUSSRC:.c=.o)

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(FLAGS) -c $(SRC)
	ar -rcs $(NAME) $(OBJ)

bonus: $(OBJ) $(BONUSOBJ)
	$(CC) $(FLAGS) -c $(BONUSSRC)
	ar -rcs $(NAME) $(BONUSOBJ) $(OBJ)

clean:
	$(RM) $(OBJ) $(BONUSOBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean all

rebonus: fclean bonus

.PHONY: all clean fclean re
