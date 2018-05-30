# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: marcusflorentin <marvin@42.fr>             +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/11/18 21:56:48 by marcusflo         #+#    #+#              #
#    Updated: 2017/11/23 17:24:32 by mflorent         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	libft.a

INC		=	includes/libft.h

SRC		=	sources/ft_abs.c \
			sources/ft_atoi.c \
			sources/ft_bzero.c \
			sources/ft_clean_list.c \
			sources/ft_create_item.c \
			sources/ft_get_item.c \
			sources/ft_init_ctrl.c \
			sources/ft_int_cmp.c \
			sources/ft_isalnum.c \
			sources/ft_isalpha.c \
			sources/ft_isascii.c \
			sources/ft_isdigit.c \
			sources/ft_isprint.c \
			sources/ft_itoa.c \
			sources/ft_lstadd.c \
			sources/ft_lstdel.c \
			sources/ft_lstdelone.c \
			sources/ft_lstiter.c \
			sources/ft_lstmap.c \
			sources/ft_lstnew.c \
			sources/ft_memalloc.c \
			sources/ft_memccpy.c \
			sources/ft_memchr.c \
			sources/ft_memcmp.c \
			sources/ft_memcpy.c \
			sources/ft_memdel.c \
			sources/ft_memichr.c \
			sources/ft_memicmp.c \
			sources/ft_memjoin.c \
			sources/ft_memmove.c \
			sources/ft_memndup.c \
			sources/ft_memset.c \
			sources/ft_memswp.c \
			sources/ft_putchar.c \
			sources/ft_putchar_fd.c \
			sources/ft_putendl.c \
			sources/ft_putendl_fd.c \
			sources/ft_putnbr.c \
			sources/ft_putnbr_fd.c \
			sources/ft_putstr.c \
			sources/ft_putstr_fd.c \
			sources/ft_rm_ctrl.c \
			sources/ft_rm_item.c \
			sources/ft_rm_list.c \
			sources/ft_search_item.c \
			sources/ft_strcat.c \
			sources/ft_strchr.c \
			sources/ft_strclr.c \
			sources/ft_strcmp.c \
			sources/ft_strcpy.c \
			sources/ft_strdel.c \
			sources/ft_strdup.c \
			sources/ft_strequ.c \
			sources/ft_stricpy.c \
			sources/ft_striter.c \
			sources/ft_striteri.c \
			sources/ft_strjoin.c \
			sources/ft_strlcat.c \
			sources/ft_strlen.c \
			sources/ft_strlswp.c \
			sources/ft_strmap.c \
			sources/ft_strmapi.c \
			sources/ft_strncat.c \
			sources/ft_strncmp.c \
			sources/ft_strncpy.c \
			sources/ft_strnequ.c \
			sources/ft_strnew.c \
			sources/ft_strnjoin.c \
			sources/ft_strnstr.c \
			sources/ft_strnswp.c \
			sources/ft_strrchr.c \
			sources/ft_strsplit.c \
			sources/ft_strstr.c \
			sources/ft_strsub.c \
			sources/ft_strswp.c \
			sources/ft_strtrim.c \
			sources/ft_tolower.c \
			sources/ft_toupper.c \




CC 		=	clang

OBJS	=	$(SRC:.c=.o)

RM		=	rm -f

CFLAGS	=	-Wall -Wextra -Werror

$(NAME)	:	$(OBJS)
		ar rc $(NAME) $(OBJS) $(INC)

all		:	$(NAME)

clean	:
		$(RM) $(OBJS)

fclean	:		clean
		$(RM) $(NAME)

re		:		fclean all
