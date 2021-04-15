# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hekang <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/04/12 16:07:16 by hekang            #+#    #+#              #
#    Updated: 2021/04/12 16:18:17 by hekang           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= libasm.a
SRCS	= ft_strlen.s \
		  ft_strcpy.s \
		  ft_strdup.s \
		  ft_strcmp.s \
		  ft_write.s \
		  ft_read.s

OBJS	= $(SRCS:.s=.o)

%.o		: %.s
		nasm -f macho64 $<
	
all		: $(NAME)

$(NAME) : $(OBJS)
		ar rcs $(NAME) $(OBJS)

clean	:
		rm -rf $(OBJS)
	
fclean 	: clean
		rm -rf $(NAME)

re		: fclean all

.PHONY  : all clean fclean re
