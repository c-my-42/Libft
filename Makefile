# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: chmurphy <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/07/02 01:01:36 by chmurphy          #+#    #+#              #
#    Updated: 2023/07/02 01:01:39 by chmurphy         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME     	:= libft.a
CC      	:= gcc
FLAGS   	:= -Wall -Wextra -Werror -g

SRCS        :=   	Part1/ft_atoi.c \
							Part1/ft_bzero.c \
                     		Part1/ft_calloc.c \
                      	 	Part1/ft_isalnum.c \
                       		Part1/ft_isalpha.c \
                       		Part1/ft_isascii.c \
                       		Part1/ft_isdigit.c \
							Part1/ft_isprint.c \
							Part1/ft_memchr.c \
                          	Part1/ft_memcmp.c \
                          	Part1/ft_memcpy.c \
                          	Part1/ft_memmove.c \
                          	Part1/ft_memset.c \
							Part1/ft_strchr.c \
							Part1/ft_strdup.c \
							Part1/ft_strlcat.c \
							Part1/ft_strlcpy.c \
							Part1/ft_strlen.c \
							Part1/ft_strncmp.c \
							Part1/ft_strnstr.c \
							Part1/ft_strrchr.c \
							Part1/ft_tolower.c \
							Part1/ft_toupper.c \
					Part2/ft_itoa.c \
							Part2/ft_putchar_fd.c \
                    	   	Part2/ft_putendl_fd.c \
							Part2/ft_putnbr_fd.c \
							Part2/ft_putstr_fd.c \
                        	Part2/ft_split.c \
                        	Part2/ft_striteri.c \
                          	Part2/ft_strjoin.c \
							Part2/ft_strmapi.c \
                         	Part2/ft_strtrim.c \
                         	Part2/ft_substr.c \
					bonus/ft_lstnew.c \
							bonus/ft_lstlast.c \
							bonus/ft_lstadd_front.c \
							bonus/ft_lstadd_back.c \
							bonus/ft_lstsize.c \
							bonus/ft_lstclear.c \
							bonus/ft_lstdelone.c \
							bonus/ft_lstiter.c \
							bonus/ft_lstmap.c
OBJS        := $(SRCS:.c=.o)
.c.o:
	@${CC} ${FLAGS} -c $< -o ${<:.c=.o}

CLR_RMV		:= \033[0m
RED		    := \033[1;31m
GREEN		:= \033[1;32m
YELLOW		:= \033[1;33m
BLUE		:= \033[1;34m
CYAN 		:= \033[1;36m
RM		    := rm -f

bonus:		all

all: 		$(NAME)

${NAME}:	${OBJS}
			@echo "$(GREEN)Compilation ${CLR_RMV}of ${YELLOW}$(NAME) ${CLR_RMV}..."
			@ar rcsv $@ $^
			@echo "$(GREEN)$(NAME) created ✔️"
clean:
			$(RM) *.o */*.o
			@ echo "$(RED)Deleting $(CYAN)$(NAME) $(CLR_RMV)objs ✔️"

fclean:		clean
			${RM} ${NAME}
			@ echo "$(RED)Deleting $(CYAN)$(NAME) $(CLR_RMV)binary ✔️"
	
re:			fclean all

.PHONY:		all clean fclean re bonus
