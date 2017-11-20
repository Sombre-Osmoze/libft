# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: marcusflorentin <marvin@42.fr>             +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/11/18 21:56:48 by marcusflo         #+#    #+#              #
#    Updated: 2017/11/18 21:56:52 by marcusflo        ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	libft.a

SRC		= 	ft_atoi.c \
					ft_bzero.c \
					ft_isalnum.c \
					ft_isalpha.c \
					ft_isascii.c \
					ft_isdigit.c \
					ft_isprint.c \
					ft_memalloc.c \
					ft_memccpy.c \
					ft_memchr.c \
					ft_memcmp.c \
					ft_memcpy.c \
					ft_memdel.c \
					ft_memmove.c \
					ft_memset.c \
					ft_strcat.c \
					ft_strchr.c \
					ft_strcmp.c \
					ft_strcpy.c \
					ft_strdel.c \
					ft_strdup.c \
					ft_strlcat.c \
					ft_strlen.c \
					ft_strncat.c \
					ft_strncmp.c \
					ft_strncpy.c \
					ft_strnew.c \
					ft_strnstr.c \
					ft_strrchr.c \
					ft_strstr.c \
					ft_tolower.c \
					ft_toupper.c \
					ft_striter.c \
					ft_strclr.c \
					ft_striteri.c \
					ft_strmap.c \
					ft_strmapi.c \

OBJS	=	$(SRC:.c=.o)

RM		=		rm -f

CFLAGS	=	-Wall -Wextra -Werror

$(NAME)	:	$(OBJS)
		ar rc $(NAME) $(OBJS)

all				:		$(NAME)

clean	:
		$(RM) $(OBJS)

fclean	:		clean
		$(RM) $(NAME)

re				:		fclean all
