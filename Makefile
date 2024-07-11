# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: datran <datran@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/29 14:07:20 by datran            #+#    #+#              #
#    Updated: 2022/11/29 16:20:07 by datran           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	libftprintf.a

LIBFT_PATH	=	./libft
LIBFT	=	$(LIBFT_PATH)/libft.a

CC	=	cc
CFLAGS	=	-Wall -Wextra -Werror

RM	=	rm -rf

AR	=	ar
ARFLAGS	=	rcs

SOURCES	=	ft_printf.c \
			ft_is_argument.c \
			ft_formats.c \
			ft_char_format.c \
			ft_string_format.c \
			ft_pointer_format.c \
			ft_decimal_format.c \
			ft_unsigned_decimal_format.c \
			ft_hexadecimal_format.c \
			ft_upper_case_hexadecimal_format.c \
			ft_percent_format.c \
			ft_input_parser.c

OBJECTS	=	$(SOURCES:.c=.o)

all:	$(LIBFT) $(NAME)

$(OBJECTS):
		$(CC) $(CFLAGS) -c $(SOURCES) -I./

$(LIBFT):
		make all -C $(LIBFT_PATH)

$(NAME):	$(OBJECTS)
			cp $(LIBFT) $(NAME)
			$(AR) $(ARFLAGS) $(NAME) $(OBJECTS)

clean:
		make clean -C $(LIBFT_PATH)
		$(RM) $(OBJECTS)

fclean:	clean
		make fclean -C $(LIBFT_PATH)
		$(RM) $(NAME)

re:	fclean all

.PHONY:	all clean fclean re
