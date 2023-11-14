# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: scambier <scambier@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/08 17:06:10 by scambier          #+#    #+#              #
#    Updated: 2023/11/14 16:04:34 by scambier         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


OUT_PATH = .
OUT = libft.a

SRC_PATH = .
SRC = \
	ft_isalpha.c\
	ft_isdigit.c\
	ft_isalnum.c\
	ft_isascii.c\
	ft_isprint.c\
	ft_strlen.c\
	ft_memset.c\
	ft_bzero.c\
	ft_memcpy.c\
	ft_memmove.c\
	ft_strlcpy.c\
	ft_strlcat.c\
	ft_toupper.c\
	ft_tolower.c\
	ft_strchr.c\
	ft_strrchr.c\
	ft_strncmp.c\
	ft_memchr.c\
	ft_memcmp.c\
	ft_strnstr.c\
	ft_atoi.c\
	ft_calloc.c\
	ft_strdup.c\
	ft_substr.c\
	ft_strjoin.c\
	ft_strtrim.c\
	ft_split.c\
	ft_putnbr_fd.c\
	ft_putendl_fd.c\
	ft_putstr_fd.c\
	ft_putchar_fd.c\
	ft_itoa.c\
	ft_strmapi.c\
	ft_striteri.c
SRC_BONUS = \
	ft_lstnew_bonus.c\
	ft_lstadd_front_bonus.c\
	ft_lstsize_bonus.c\
	ft_lstlast_bonus.c\
	ft_lstadd_back_bonus.c\
	ft_lstdelone_bonus.c\
	ft_lstclear_bonus.c\
	ft_lstiter_bonus.c\
	ft_lstmap_bonus.c

OBJ_PATH = ./obj
OBJ = $(addprefix $(OBJ_PATH)/, $(addsuffix .o, $(notdir $(basename $(SRC)))))
OBJ_BONUS = $(addprefix $(OBJ_PATH)/, $(addsuffix .o, $(notdir $(basename $(SRC_BONUS)))))

CFLAGS = -Wall -Werror -Wextra

default : all

all : $(OUT_PATH)/$(OUT)

bonus : $(OUT_PATH) $(OBJ_PATH) $(OBJ) $(OBJ_BONUS)
	ar rc $(OUT_PATH)/$(OUT) $(OBJ) $(OBJ_BONUS)

$(OBJ_PATH) :
	mkdir $(OBJ_PATH)

$(OUT_PATH) :
	mkdir $(OUT_PATH)

$(OBJ_PATH)/%.o : $(SRC_PATH)/%.c
	cc $(CFLAGS) -o $@ -c $< $()

$(OUT_PATH)/$(OUT) : $(OUT_PATH) $(OBJ_PATH) $(OBJ)
	ar rc $(OUT_PATH)/$(OUT) $(OBJ)

clean :
	rm -rf $(OBJ_PATH)

fclean : clean
	rm $(OUT_PATH)/$(OUT)

re : fclean all

.PHONY : re fclean clean all default GET_SOURCES GET_SOURCES_BONUS TEST_MAIN FCLEAN

#DEBUG TARGETS

GET_SOURCES :
	find $(SRC_PATH)/ -type f -name "ft_*.c"

GET_SOURCES_BONUS :
	find $(SRC_PATH)/ -type f -name "ft_*_bonus.c"

TEST_MAIN : bonus
	cc main.c -L$(OUT_PATH)/ -lft -lbsd -g3
	./a.out

FCLEAN : fclean
	rm ./a.out
