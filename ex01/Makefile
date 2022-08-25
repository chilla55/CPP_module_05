# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: agrotzsc <agrotzsc@student.42wolfsburg.de> +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/03/01 03:58:29 by agrotzsc          #+#    #+#              #
#    Updated: 2022/08/24 22:51:52 by agrotzsc         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#---- Config ------------------------------------------------------------------#

DEBUG ?= 0
ifeq ($(DEBUG), 1)
    CFLAGS 		=	-g -ggdb -Wall -Wextra -Werror -std=c++98
else
	CFLAGS		=	-Wall -Wextra -Werror -std=c++98
endif


NAME			=	ex01
CC				=	c++
DEF_COLOR		=	\033[0;39m
GREEN			=	\033[0;92m
YELLOW			=	\033[0;93m
RM				=	rm -rf

#---- Directories -------------------------------------------------------------#

SRC_DIR			=	./
OBJ_DIR			=	obj/

#---- Files -------------------------------------------------------------------#

SOURCES = main.cpp Bureaucrat.cpp Form.cpp

#---- Prefix ------------------------------------------------------------------#

OBJS = $(SOURCES:$(SRC_DIR)%.cpp=$(OBJ_DIR)%.o)

#---- Libraries ---------------------------------------------------------------#


$(NAME): $(OBJS)
	@printf "%b" "\r\033[2K"
	@printf "%b" "\r$(YELLOW)Compiling: $(NAME)$(DEF_COLOR)"
	@$(CC) -o $(NAME) $(CFLAGS) $(OBJS)
	@printf "%b" "\r\033[2K"
	@printf "%b" "\r$(GREEN)$(NAME) compiled.$(DEF_COLOR)\n"

$(OBJ_DIR)%.o: $(SRC_DIR)%.cpp
	@mkdir -p $(@D)
	@printf "%b" "\r\033[2K"
	@printf "%b" "\r$(YELLOW)Compiling: $<$(DEF_COLOR)"
	@$(CC) $(CFLAGS) $(INC) -o $@ -c $<

all: ${NAME}

clean:
	@${RM} ${OBJ_DIR}
	@echo "$(GREEN)Clean.$(DEF_COLOR)"
fclean: clean
	@${RM} ${NAME}
	@echo "$(GREEN)FClean.$(DEF_COLOR)"

re: fclean all

.PHONY: all clean fclean re
