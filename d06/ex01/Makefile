# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: vgladush <vgladush@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/06/18 12:37:02 by vgladush          #+#    #+#              #
#    Updated: 2018/08/16 11:57:20 by vgladush         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	data
CMPL	=	clang++
FLGS	=	-Wall -Wextra -Werror
DIRC	=	./
FUNC	=	main.cpp
OBJC	=	$(FUNC:.cpp=.o)
OBJS	=	$(addprefix $(DIRC), $(OBJC))

all: $(NAME)

$(NAME): $(OBJS)
	@$(CMPL) -o $(NAME) $(OBJC)
	@echo "\x1B[0;32m$(NAME) ready\x1B[0m"

$(DIRC)%.o: $(DIRC)%.cpp
	@$(CMPL) $(FLGS) -o $@ -c $<

clean:
	@rm -f $(OBJC)
	@echo "\x1B[1;31mobjects $(NAME) deleted\x1B[0m"

fclean: clean
	@rm -f $(NAME)
	@echo "\x1B[1;31m$(NAME) deleted\x1B[0m"

re: fclean all
