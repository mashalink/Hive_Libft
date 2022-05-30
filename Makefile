# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mlink <mlink@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/10/17 12:58:54 by mlink             #+#    #+#              #
#    Updated: 2022/05/30 17:03:40 by mlink            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRCS = 	./scr_libft/ft_atoi.c \
		./scr_libft/ft_bzero.c \
		./scr_libft/ft_isalnum.c \
		./scr_libft/ft_isalpha.c \
		./scr_libft/ft_isascii.c \
		./scr_libft/ft_isdigit.c \
		./scr_libft/ft_islower.c \
		./scr_libft/ft_isprint.c \
		./scr_libft/ft_isspace.c \
		./scr_libft/ft_isupper.c \
		./scr_libft/ft_itoa.c \
		./scr_libft/ft_join_del.c \
		./scr_libft/ft_lstadd.c \
		./scr_libft/ft_lstdel.c \
		./scr_libft/ft_lstdelone.c \
		./scr_libft/ft_lstiter.c \
		./scr_libft/ft_lstmap.c \
		./scr_libft/ft_lstnew.c \
		./scr_libft/ft_lstprint.c \
		./scr_libft/ft_lstsize.c \
		./scr_libft/ft_memalloc.c \
		./scr_libft/ft_memccpy.c \
		./scr_libft/ft_memchr.c \
		./scr_libft/ft_memcmp.c \
		./scr_libft/ft_memcpy.c \
		./scr_libft/ft_memdel.c \
		./scr_libft/ft_memmove.c \
		./scr_libft/ft_memset.c \
		./scr_libft/ft_putchar_fd.c \
		./scr_libft/ft_putchar.c \
		./scr_libft/ft_putendl_fd.c \
		./scr_libft/ft_putendl.c \
		./scr_libft/ft_putnbr_fd.c \
		./scr_libft/ft_putnbr.c \
		./scr_libft/ft_putstr_fd.c \
		./scr_libft/ft_putstr.c \
		./scr_libft/ft_strcat.c \
		./scr_libft/ft_strchr.c \
		./scr_libft/ft_strclr.c \
		./scr_libft/ft_strcmp.c \
		./scr_libft/ft_strcpy.c \
		./scr_libft/ft_strdel.c \
		./scr_libft/ft_strdup.c \
		./scr_libft/ft_strequ.c \
		./scr_libft/ft_striter.c \
		./scr_libft/ft_striteri.c \
		./scr_libft/ft_strjoin.c \
		./scr_libft/ft_strlcat.c \
		./scr_libft/ft_strlen.c \
		./scr_libft/ft_strmap.c \
		./scr_libft/ft_strmapi.c \
		./scr_libft/ft_strncat.c \
		./scr_libft/ft_strncmp.c \
		./scr_libft/ft_strncpy.c \
		./scr_libft/ft_strnequ.c \
		./scr_libft/ft_strnew.c \
		./scr_libft/ft_strnstr.c \
		./scr_libft/ft_strrchr.c \
		./scr_libft/ft_strsplit.c \
		./scr_libft/ft_strstr.c \
		./scr_libft/ft_strsub.c \
		./scr_libft/ft_strtrim.c \
		./scr_libft/ft_tolower.c \
		./scr_libft/ft_toupper.c \
		./scr_libft/get_next_line.c

OBIECT = *.o

HEADER = ./includes

FLAGS = -Wall -Wextra -Werror -c 

all: $(NAME)
$(NAME): 
		gcc $(FLAGS) $(SRCS) -I $(HEADER) 
		ar rc $(NAME) $(OBIECT)
		ranlib $(NAME)

clean:
		/bin/rm -f $(OBIECT)

fclean: clean
		/bin/rm -f $(NAME)

re: 	fclean all

.PHONY: all clean fclean re
