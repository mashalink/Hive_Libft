# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mlink <mlink@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/10/17 12:58:54 by mlink             #+#    #+#              #
#    Updated: 2022/06/15 13:56:03 by mlink            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
FLAGS = -Wall -Wextra -Werror -c  
HEADER = includes/

SRC_DIR = ./src_ft_printf/
SRC =		check.c color.c cheng_mod.c\
			ft_printf.c\
			help_function.c\
			init.c\
			print_buffer.c\
			save_param.c\
			type_buox.c 	type_c.c		type_s.c\
			type_di.c 		type_f.c 		type_p.c 
SRCS=$(addprefix $(SRC_DIR), $(SRC))

LIB_SRC_DIR = ./src_libft/
LIB_SRC =	ft_atoi.c \
			ft_bzero.c \
			ft_isalnum.c	ft_isalpha.c	ft_isascii.c \
			ft_isdigit.c	ft_islower.c	ft_isprint.c \
			ft_isspace.c	ft_isupper.c	ft_itoa.c \
			ft_join_del.c \
			ft_lstadd.c		ft_lstdel.c		ft_lstdelone.c \
			ft_lstiter.c	ft_lstmap.c		ft_lstnew.c \
			ft_lstprint.c	ft_lstsize.c \
			ft_memalloc.c	ft_memccpy.c 	ft_memchr.c \
			ft_memcmp.c		ft_memcpy.c		ft_memdel.c \
			ft_memmove.c	ft_memset.c \
			ft_putchar_fd.c	ft_putchar.c	ft_putendl_fd.c \
			ft_putendl.c	ft_putnbr_fd.c	ft_putnbr.c \
			ft_putstr_fd.c	ft_putstr.c \
			ft_strcat.c		ft_strchr.c		ft_strclr.c \
			ft_strcmp.c		ft_strcpy.c		ft_strdel.c \
			ft_strdup.c		ft_strequ.c		ft_striter.c \
			ft_striteri.c	ft_strjoin.c	ft_strlcat.c \
			ft_strlen.c		ft_strmap.c		ft_strmapi.c \
			ft_strncat.c	ft_strncmp.c	ft_strncpy.c \
			ft_strnequ.c	ft_strnew.c		ft_strnstr.c \
			ft_strrchr.c	ft_strsplit.c	ft_strstr.c \
			ft_strsub.c		ft_strtrim.c \
			ft_tolower.c	ft_toupper.c \
			get_next_line.c
LIB_SRCS=$(addprefix $(LIB_SRC_DIR), $(LIB_SRC))

OBJ = $(SRC:%.c=%.o) $(LIB_SRC:%.c=%.o)

O_DIR = obj
OBJS = $(addprefix $(O_DIR)/, $(OBJ))

RESET = \033[0m
YELLOW = \033[0;33m
GREEN = \033[0;32m
BOLD_BLUE = \033[1;34m

all: $(NAME)

$(O_DIR)/%.o: $(SRC_DIR)/%.c
	@/bin/mkdir -p $(O_DIR)
	@gcc $(FLAGS) -I $(HEADER) $< -o $@

$(O_DIR)/%.o: $(LIB_SRC_DIR)/%.c
	@gcc $(FLAGS) -I $(HEADER) $< -o $@
	
$(NAME): $(OBJS)
	@echo "$(GREEN)<<$(RESET)$(YELLOW)$(NAME) is compiling...$(GREEN)>>$(RESET)"
	@ar rc $(NAME) $^
	@ranlib $(NAME)
	@echo "$(GREEN)<<$(RESET)$(YELLOW)$(NAME) is ready to use$(GREEN)>>$(RESET)"
	
clean:
	@rm -rf $(O_DIR)
	@echo "   $(GREEN)<<$(RESET)$(YELLOW)all .o files are deleted$(GREEN)>>$(RESET)"

fclean: clean
	@rm -f $(NAME)
	@echo "    $(GREEN)<<$(RESET)$(YELLOW)$(NAME) deleted$(GREEN)>>$(RESET)"

re: 	fclean all

.PHONY: all clean fclean re
