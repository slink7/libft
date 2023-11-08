# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: scambier <scambier@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/08 17:06:10 by scambier          #+#    #+#              #
#    Updated: 2023/11/08 17:07:38 by scambier         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


OUT_PATH = .
OUT = libft.a

SRC_PATH = .
SRC = $(shell find $(SRC_PATH)/ -type f -name "ft_*.c")

OBJ_PATH = ./obj
OBJ = $(addprefix $(OBJ_PATH)/, $(addsuffix .o, $(notdir $(basename $(SRC)))))

CSFLAGS = -Wall -Werror -Wextra

default : all

all : $(OUT_PATH)/$(OUT)

$(OBJ_PATH) :
	mkdir $(OBJ_PATH)

$(OUT_PATH) :
	mkdir $(OUT_PATH)

$(OBJ_PATH)/%.o : $(SRC_PATH)/%.c
	cc $(CSFLAGS) -o $@ -c $< $()

$(OUT_PATH)/$(OUT) : $(OUT_PATH) $(OBJ_PATH) $(OBJ)
	ar rc $(OUT_PATH)/$(OUT) $(OBJ)

GET_SOURCES :
	find $(SRC_PATH)/ -type f -name "*.c"

TEST_MAIN : all
	cc main.c -L$(OUT_PATH)/ -lft -lbsd
	./a.out