# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: amenadue <iscoffee.learning@gmail.c>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/09/13 17:55:39 by amenadue          #+#    #+#              #
#    Updated: 2021/09/14 10:29:04 by amenadue         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

Library		= libft

files 	   = ft_strlen \
			 ft_memmove \
			 ft_memcpy \
			 ft_strlcpy \
			 ft_strlcat \
			 ft_isalpha \
			 ft_isdigit \
			 ft_isalnum \
			 ft_isascii \
			 ft_isprint \
			 ft_memset \
			 ft_bzero \
			 ft_toupper \
			 ft_tolower \
			 ft_strchr \
			 ft_strrchr \
			 ft_strncmp \
			 ft_memchr \
			 ft_memcmp \
			 ft_strnstr \
			 ft_atoi \
			 ft_calloc \
			 ft_strdup \

Compiler	= gcc

CmpFlags	= -Wall -Wextra -Werror

# Environment

OUTN	= $(Library).a

CFILES	= $(files:%=%.c)

OFILES	= $(files:%=%.o)

NAME	= $(OUTN)

$(NAME):
	$(Compiler) $(CmpFlags) -c $(CFILES) -I./
	ar rc $(OUTN) $(OFILES)

all:
	$(NAME)

clean:
	rm -f $(OUTN)

fclean:
	clean
	rm -f $(OUTN)

re:
	fclean all

.PHONY: all, clean, fclean, re

test:
	bash ../Libftest/grademe.sh
