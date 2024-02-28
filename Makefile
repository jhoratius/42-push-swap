# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jhoratiu <jhoratiu@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/01/25 15:20:57 by jhoratiu          #+#    #+#              #
#    Updated: 2024/02/27 15:52:00 by jhoratiu         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap

CC 			= cc
CFLAGS 		= -Wall -Wextra -Werror -g3
RM 			= rm -f
EXTSRCS 	= .c
PATHSRCS 	= main/

SRCS 		= $(addsuffix ${EXTSRCS}, \
							$(addprefix ${PATHSRCS}, \
							push_swap \
							ft_push \
							ft_reverse_rotate \
							ft_rotate \
							ft_split \
							ft_swap \
							ft_utils \
				))

# SRCS_BONUS

OBJS=$(SRCS:.c=.o)
# OBJS_BONUS=$(SRCS_BONUS:.c=.o)

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) -o $(NAME) $(OBJS)

clean:
	$(RM) $(NAME) $(OBJS)
# $(OBJS_BONUS) 

fclean: clean
	$(RM) $(NAME)

re: clean all

bonus: $(OBJS) 
	$(AR) $(NAME) $(OBJS)
# $(OBJS_BONUS)

.PHONY: all clean fclean re bonus