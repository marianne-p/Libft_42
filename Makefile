# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mpihur <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/10/30 16:35:35 by mpihur            #+#    #+#              #
#    Updated: 2024/04/06 16:48:36 by mpihur           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME :=        libft.a
SRCS :=        ft_strnstr.c ft_putnbr_fd.c ft_putendl_fd.c ft_putstr_fd.c ft_putchar_fd.c ft_atoi.c ft_strmapi.c ft_striteri.c ft_itoa.c ft_bzero.c ft_calloc.c ft_isalnum.c ft_isalpha.c ft_isascii.c ft_isdigit.c ft_isprint.c ft_memchr.c ft_memcmp.c ft_memcpy.c ft_memmove.c ft_memset.c ft_strchr.c ft_strdup.c ft_strlcat.c ft_strlcpy.c ft_strlen.c ft_strncmp.c ft_strrchr.c ft_substr.c ft_tolower.c ft_toupper.c ft_substr.c ft_strjoin.c ft_split.c ft_strtrim.c
B_SRCS:=	ft_lstnew.c ft_lstadd_front.c ft_lstsize.c ft_lstlast.c ft_lstadd_back.c ft_lstdelone.c ft_lstclear.c ft_lstiter.c ft_lstmap.c 

OBJS :=        $(SRCS:.c=.o)
B_OBJS :=	$(B_SRCS:.c=.o)

CC :=        cc
CFLAGS :=    -Wall -Wextra -Werror

AR :=        ar rcs

RM :=        rm -f

%.o:        %.c
			$(CC) $(CFLAGS) -c $< -o $@

$(NAME):    $(OBJS)
			$(AR) $@ $^

bonus:	$(OBJS) $(B_OBJS)
	$(RM) $(NAME)	
	$(AR) $(NAME) $(OBJS) $(B_OBJS)

all:        $(NAME)

clean:
			$(RM) $(OBJS) $(B_OBJS)

fclean:        clean
			$(RM) $(NAME)

re:            fclean all

.PHONY:        all clean fclean re
