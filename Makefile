# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: scambier <scambier@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/08 17:06:10 by scambier          #+#    #+#              #
#    Updated: 2023/11/16 01:00:00 by scambier         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

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

OBJ = $(addsuffix .o, $(notdir $(basename $(SRC))))
OBJ_BONUS = $(addsuffix .o, $(notdir $(basename $(SRC_BONUS))))

CFLAGS = -Wall -Werror -Wextra

default : all

all : $(NAME)

bonus : $(OBJ) $(OBJ_BONUS)
	ar rc $(NAME) $(OBJ) $(OBJ_BONUS)

%.o : %.c
	cc $(CFLAGS) -o $@ -c $< $()

$(NAME) : $(OBJ)
	ar rc $(NAME) $(OBJ)

clean :
	rm -rf $(OBJ) $(OBJ_BONUS) || true

fclean : clean
	rm $(NAME) || true

re : fclean all


.PHONY : re fclean clean all default

# test :
# 	cc *.c -lbsd -g3
# 	./a.out

# test_clean : fclean
# 	rm ./a.out || true
# 	rm libft.so || true

# so :
# 	$(CC) -nostartfiles -fPIC $(CFLAGS) $(SRC) $(SRC_BONUS)
# 	gcc -nostartfiles -shared -o libft.so $(OBJ) $(OBJ_BONUS)

# unit :
# 	cd ../libft-unit-test ; make f

# trip :
# 	rm libft.so || true
# 	cd tripouille ; make a

# .PHONY : test_clean so unit trip