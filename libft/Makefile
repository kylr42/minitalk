# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jsiona <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/04/20 12:32:54 by jsiona            #+#    #+#              #
#    Updated: 2021/05/18 03:26:28 by jsiona           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = gcc
CFLAGS = -Wall -Wextra -Werror
NAME = libft.a

SRCS =	ft_atoi.c ft_bzero.c \
		ft_memcpy.c ft_memccpy.c \
		ft_memcmp.c ft_memmove.c \
		ft_memchr.c ft_strlen.c \
		ft_isalpha.c ft_isdigit.c \
		ft_isalnum.c ft_isascii.c \
		ft_isprint.c ft_toupper.c \
		ft_tolower.c ft_strchr.c \
		ft_strrchr.c ft_substr.c \
		ft_strjoin.c ft_strtrim.c \
		ft_strncmp.c ft_strnstr.c \
		ft_calloc.c ft_strdup.c \
		ft_strlcpy.c ft_itoa.c \
		ft_strmapi.c ft_putchar_fd.c \
		ft_putstr_fd.c ft_putendl_fd.c \
		ft_putnbr_fd.c ft_strlcpy.c \
		ft_strlcat.c ft_split.c ft_memset.c

BONUS = ft_lstnew.c ft_lstadd_front.c ft_lstsize.c\
        ft_lstlast.c ft_lstadd_back.c ft_lstdelone.c \
        ft_lstclear.c ft_lstiter.c ft_lstmap.c

OBJS = ${SRCS:.c=.o}
BONUS_OBJS = ${BONUS:.c=.o}
DEPS = libft.h

all: ${NAME}

${NAME}: ${OBJS} ${DEPS}
	ar -rc ${NAME} ${OBJS}
	ranlib ${NAME}

bonus: ${OBJS} ${BONUS_OBJS}
	ar -rc ${NAME} ${OBJS} ${BONUS_OBJS}
	ranlib ${NAME}

clean:
	rm -f $(OBJS) ${BONUS:.c=.o}

fclean: clean
	rm -f ${NAME}

re: fclean all

.PHONY:	all clean fclean re bonus
