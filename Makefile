# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: nireher- <nireher-@student.42madrid.com>   +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/10/13 22:43:56 by nireher-          #+#    #+#              #
#    Updated: 2023/10/27 18:26:43 by nireher-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

RM	= 	rm -f
AR	= 	ar -rcs

CC 	= 	gcc
CFLAGS	= 	-Wall -Werror -Wextra

NAME	= 	libft.a

SRCS	= 	ft_atoi.c\
		   	ft_calloc.c\
		   	ft_memchr.c\
		   	ft_memcpy.c\
		   	ft_memset.c\
		   	ft_strdup.c\
		   	ft_strlcpy.c\
		   	ft_strrchr.c\
		   	ft_bzero.c\
		   	ft_memcmp.c\
		   	ft_memmove.c\
		   	ft_strchr.c\
		   	ft_strlen.c\
		   	ft_isalnum.c\
		   	ft_isalpha.c\
		   	ft_isascii.c\
		   	ft_isdigit.c\
		   	ft_isprint.c\
		   	ft_tolower.c\
		   	ft_toupper.c\
			ft_strjoin.c\
			ft_substr.c\
			ft_split.c\
			ft_strmapi.c\
			ft_striteri.c\
			ft_itoa.c

OBJS	= 	${SRCS:.c=.o}

all:		${NAME}

${NAME}:	${OBJS}
		${AR} ${NAME} ${OBJS}

.c.o:
		${CC} ${CFLAGS} -c $< -o ${<:.c=.o}

clean:
		${RM} ${OBJS}

fclean:		clean
		${RM} ${NAME}

re:		fclean all

.PHONY:		all clean fclean re
