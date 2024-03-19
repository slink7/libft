# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ymostows <ymostows@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/08 17:06:10 by scambier          #+#    #+#              #
#    Updated: 2024/03/19 14:53:44 by ymostows         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRC = \
	char/ft_isalpha.c\
	char/ft_isdigit.c\
	char/ft_isalnum.c\
	char/ft_isascii.c\
	char/ft_isprint.c\
	char/ft_toupper.c\
	char/ft_tolower.c\
	mem/ft_memset.c\
	mem/ft_bzero.c\
	mem/ft_memcpy.c\
	mem/ft_memmove.c\
	mem/ft_memchr.c\
	mem/ft_memcmp.c\
	mem/ft_calloc.c\
	mem/ft_pmem.c\
	str/ft_strlen.c\
	str/ft_strlcpy.c\
	str/ft_strlcat.c\
	str/ft_strchr.c\
	str/ft_strchrf.c\
	str/ft_strrchr.c\
	str/ft_strncmp.c\
	str/ft_strnstr.c\
	str/ft_strnset.c\
	str/ft_atoi.c\
	str/ft_atoi_strict.c\
	str/ft_strdup.c\
	str/ft_substr.c\
	str/ft_strjoin.c\
	str/ft_strtrim.c\
	str/ft_split.c\
	str/ft_splitf.c\
	str/ft_itoa.c\
	str/ft_strmapi.c\
	str/ft_striteri.c\
	str/ft_strarrfree.c\
	str/ft_strarrlen.c\
	str/ft_strchri.c\
	str/ft_atoi_base.c\
	lst/ft_lstnew.c\
	lst/ft_lstadd_front.c\
	lst/ft_lstsize.c\
	lst/ft_lstlast.c\
	lst/ft_lstadd_back.c\
	lst/ft_lstdelone.c\
	lst/ft_lstclear.c\
	lst/ft_lstiter.c\
	lst/ft_lstmap.c\
	stream/get_next_line.c\
	stream/ft_putnbr_fd.c\
	stream/ft_putstr_fd.c\
	stream/ft_putchar_fd.c\
	stream/ft_putnbr_base_fd.c\
	math/ft_min.c\
	math/ft_max.c\
	math/ft_abs.c\
	math/ft_clamp.c\
	math/ft_fmin.c\
	math/ft_fmax.c\
	math/ft_fabs.c\
	math/ft_fclamp.c\
	printf/ft_printf.c\
	printf/putters0.c\
	bst/ft_bst_fetch.c\
	bst/ft_bst_getvar.c\
	bst/ft_bst_print.c\
	bst/ft_var_free.c\
	bst/ft_bst_free.c\
	bst/ft_bst_new.c\
	bst/ft_bst_setvar.c\
	bst/ft_var_new.c\
	bst/ft_bst_size.c\
	bst/ft_bst_export.c\
	bit/ft_bit_get.c\
	bit/ft_bit_set.c\
	bit/ft_bit_invert.c\
	strbuilder/ft_strbuilder_new.c\
	strbuilder/ft_strbuilder_free.c\
	strbuilder/ft_strbuilder_addchar.c\
	strbuilder/ft_strbuilder_addstr.c\
	strbuilder/ft_strbuilder_len.c\
	strbuilder/ft_strbuilder_build.c\

OBJ = $(SRC:.c=.o)

CFLAGS = -Wall -Werror -Wextra -g3

default : all

all : $(NAME)

%.o : %.c
	cc $(CFLAGS) -o $@ -c $< -I.

$(NAME) : $(OBJ)
	ar rc $(NAME) $(OBJ)

clean :
	rm -rf $(OBJ) || true

fclean : clean
	rm $(NAME) || true

re : fclean all

test : all
	cc main.c -c
	cc main.o -L. -lft

.PHONY : re fclean clean all default