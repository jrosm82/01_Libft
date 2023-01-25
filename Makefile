# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jrosmari <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/01/17 20:33:20 by jrosmari          #+#    #+#              #
#    Updated: 2023/01/25 15:23:50 by jrosmari         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

CC = gcc
CFLAGS = -Wall -Wextra -Werror
AR = ar rcs
RM = rm -f

FNAME = ft_isalpha ft_isdigit ft_isalnum ft_isascii \
	ft_isprint ft_strlen ft_memset ft_bzero	\
	ft_memcpy ft_memmove ft_toupper ft_tolower \
	ft_strchr ft_strrchr ft_strncmp ft_strlcpy \
	ft_strjoin ft_strlcat ft_memchr ft_memcmp \
	ft_strnstr ft_atoi ft_calloc ft_strdup ft_substr \
	ft_strtrim ft_itoa ft_putchar_fd ft_putstr_fd \
	ft_putendl_fd ft_putnbr_fd ft_strmapi ft_striteri \
	ft_split 

FNAME_BONUS = ft_lstnew ft_lstadd_front ft_lstsize ft_lstlast ft_lstadd_back \
		ft_lstdelone ft_lstclear ft_lstiter ft_lstmap

SOURCES_DIR = ./
SOURCES = $(addprefix $(SOURCES_DIR), $(addsuffix .c, $(FNAME)))
SOURCES_B = $(addprefix $(SOURCES_DIR), $(addsuffix .c, $(FNAME_BONUS)))

OBJECTS_DIR = ./
OBJECTS = $(addprefix $(OBJECTS_DIR), $(addsuffix .o, $(FNAME)))
OBJECTS_BONUS = $(addprefix $(OBJECTS_DIR), $(addsuffix .o, $(FNAME_BONUS)))


.c.o: $(SOURCES)
	$(CC) $(CFLAGS) -c -o $@ $<

$(NAME): $(OBJECTS)
	$(AR) $@ $^

bonus: $(OBJECTS_BONUS)
	$(AR) $(NAME) $^

all: $(NAME)

clean:
	$(RM) $(OBJECTS) $(OBJECTS_BONUS)

fclean: clean
	$(RM) $(NAME)

re: clean all

.PHONY: bonus all clean fclean re