# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: thrio <thrio@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/12/14 12:22:35 by thrio             #+#    #+#              #
#    Updated: 2022/12/14 14:01:00 by thrio            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS	= main.c reverse.c push.c swap.c ft_split.c ft_utils1.c ft_utils2.c ft_utils3.c rotate.c

OBJS	= ${SRCS:.c=.o}

NAME	= pushswap.a

CC	= cc

RM	= rm -f

CFLAGS	= -Wall -Wextra -Werror

.c.o:
	${CC} ${CFLAGS} -c $< -o ${<:.c=.o}

${NAME} :	${OBJS}
		ar rc ${NAME} ${OBJS}
		${CC} ${CFLAGS} -o pushswap main.o pushswap.a

all:		${NAME}

clean:
		${RM} ${OBJS} ${OBJS2}

fclean:		clean
		${RM} ${NAME} pushswap

re:		fclean all

norminette:
		norminette ${SRCS}

.PHONY:		all clean fclean re norminette