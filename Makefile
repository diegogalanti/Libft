# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: digallar <digallar@student.42berlin.de>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/29 12:34:24 by digallar          #+#    #+#              #
#    Updated: 2023/03/21 17:00:01 by digallar         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


CFLAGS		= -Wall -Wextra -Werror

INCL		= libft

INCLS		= $(addsuffix .h, ${INCL})

SRC			= ft_atoi ft_itoa ft_putnbr_fd ft_strlcpy ft_tolower ft_bzero ft_memchr ft_putstr_fd ft_strlen ft_toupper ft_calloc ft_memcmp ft_split ft_strmapi ft_isalnum ft_memcpy ft_strchr ft_strncmp ft_isalpha ft_memmove ft_strdup ft_strnstr ft_isascii ft_memset ft_striteri ft_strrchr ft_isdigit ft_putchar_fd ft_strjoin ft_strtrim ft_isprint ft_putendl_fd ft_strlcat ft_substr

SRCS		= $(addsuffix .c, ${SRC})

OBJS		= $(SRCS:.c=.o)

RM			= rm -f

NAME		= libft.a

SRCB		= ft_lstmap ft_lstiter ft_lstclear ft_lstdelone ft_lstadd_back ft_lstlast ft_lstsize ft_lstadd_front ft_lstnew

SRCSB		= $(addsuffix .c, ${SRCB})

OBJSB		= $(SRCSB:.c=.o)

$(NAME): $(OBJS)
			ar rcs ${NAME} ${OBJS}

all: $(NAME)

bonus: $(NAME) $(OBJSB)
			ar rcs ${NAME} ${OBJSB}
			touch bonus	
			
.c.o:		 
			${CC} ${CFLAGS} -c -I. $< -o ${<:.c=.o}

clean:
			${RM} $(OBJS)  $(OBJSB) bonus

fclean:	clean
			${RM} $(NAME)

re: fclean all

.PHONY: all make clean fclean
