# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: scambier <scambier@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/08 17:06:10 by scambier          #+#    #+#              #
#    Updated: 2025/11/24 16:12:55 by scambier         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#=== CONFIG ===

NAME = libft.a

SRC = \
	char/ft_isalpha.c\
	char/ft_isdigit.c\
	char/ft_isalnum.c\
	char/ft_isascii.c\
	char/ft_isprint.c\
	char/ft_toupper.c\
	char/ft_tolower.c\
	char/ft_isupper.c\
	char/ft_iswhitespace.c\
	mem/ft_memset.c\
	mem/ft_bzero.c\
	mem/ft_memcpy.c\
	mem/ft_memmove.c\
	mem/ft_memchr.c\
	mem/ft_memcmp.c\
	mem/ft_calloc.c\
	mem/ft_pmem.c\
	mem/ft_memdup.c\
	mem/ft_memcat.c\
	mem/ft_free.c\
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
	str/ft_strsjoin.c\
	str/ft_strtrim.c\
	str/ft_split.c\
	str/ft_splitf.c\
	str/ft_itoa.c\
	str/ft_itoa_base.c\
	str/ft_strmapi.c\
	str/ft_striteri.c\
	str/ft_strarrfree.c\
	str/ft_strarrlen.c\
	str/ft_strchri.c\
	str/ft_atoi_base.c\
	str/ft_strcat.c\
	str/ft_strrep.c\
	str/ft_str_iswhitespace.c\
	lst/ft_lstnew.c\
	lst/ft_lstadd_front.c\
	lst/ft_lstsize.c\
	lst/ft_lstlast.c\
	lst/ft_lstadd_back.c\
	lst/ft_lstdelone.c\
	lst/ft_lstclear.c\
	lst/ft_lstiter.c\
	lst/ft_lstmap.c\
	lst/ft_lstexport.c\
	stream/get_next_line.c\
	stream/ft_putnbr_fd.c\
	stream/ft_putstr_fd.c\
	stream/ft_putchar_fd.c\
	stream/ft_putnbr_base_fd.c\
	stream/ft_get_file.c\
	stream/ft_bindump.c\
	stream/ft_hexdump.c\
	math/ft_min.c\
	math/ft_max.c\
	math/ft_abs.c\
	math/ft_clamp.c\
	math/ft_fmin.c\
	math/ft_fmax.c\
	math/ft_fabs.c\
	math/ft_fclamp.c\
	bst/ft_bst_fetch.c\
	bst/ft_bst_getval.c\
	bst/ft_bst_print.c\
	bst/ft_bst_free.c\
	bst/ft_bst_new.c\
	bst/ft_bst_setval.c\
	bst/ft_bst_size.c\
	bst/ft_bst_export.c\
	bst/ft_bst_find_min.c\
	bst/ft_bst_remove.c\
	bst/ft_bst_find.c\
	bit/ft_bit_get.c\
	bit/ft_bit_set.c\
	bit/ft_bit_invert.c\
	strb/ft_strb_new.c\
	strb/ft_strb_free.c\
	strb/ft_strb_addraw.c\
	strb/ft_strb_addchar.c\
	strb/ft_strb_addstr.c\
	strb/ft_strb_len.c\
	strb/ft_strb_build.c\
	strb/ft_strb_last.c\
	strb/ft_strb_setchars.c\
	printf/ft_nbrlen.c\
	printf/ft_dprintf.c\
	printf/conversion_specification.c\
	printf/add_char.c\
	printf/add_str.c\
	printf/ft_sprintf.c\
	printf/add_numbers.c\
	printf/ft_printf.c\


OBJ_DIR = obj
CFLAGS = -Wall -Werror -Wextra -g3

#=== AUTOMATIC VARS ===

OBJ = $(addprefix $(OBJ_DIR)/, $(addsuffix .o, $(basename $(SRC))))

#=== TARGETS ===

default : all

all : $(NAME)

$(OBJ_DIR)/%.o : %.c
	@mkdir -p $(dir $@)
	cc $(CFLAGS) -o $@ -c $< -I.

$(NAME) : $(OBJ)
	ar rc $(NAME) $(OBJ)

clean :
	rm -rf $(OBJ_DIR) || true

fclean : clean
	rm $(NAME) || true

re : fclean all

test : all
	cc main.c -g3 -c
	cc main.o -L. -lft

printf:
	make test
	./a.out | grep -a "DIFF" -B 5

.PHONY : re fclean clean all default printf
