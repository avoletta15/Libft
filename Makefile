NAME = libft.a

CC = cc

CFLAGS = -Wall -Wextra -Werror

FILE = ft_atoi.c ft_bzero.c ft_calloc.c ft_isalnum.c ft_isalpha.c ft_isascii.c \
ft_isdigit.c ft_isprint.c ft_memchr.c ft_memcmp.c ft_memcpy.c ft_memmove.c ft_memset.c \
ft_putchar_fd.c ft_putendl_fd.c ft_putnbr_fd.c ft_putstr_fd.c ft_strchr.c ft_strdup.c \
ft_strjoin.c ft_strlcat.c ft_strlcpy.c ft_strlen.c ft_strncmp.c ft_strnstr.c ft_strrchr.c \
ft_substr.c ft_tolower.c ft_toupper.c ft_strtrim.c ft_strmapi.c ft_striteri.c ft_split.c \
ft_itoa.c ft_strdup.c

FILE_O = $(FILE:.c=.o)

F_BONUS = ft_lstnew.c ft_lstadd_front.c ft_lstsize.c ft_lstlast.c ft_lstadd_back.c ft_lstdelone.c \
ft_lstclear.c ft_lstiter.c ft_lstmap.c

BONUS_O = $(F_BONUS:.c=.o)

RMOV = rm -f

STAT = ar -rcs 

$(NAME):	$(FILE_O)
			$(STAT) $(NAME) $(FILE_O)

all: 	$(NAME)

clean:
	$(RMOV) $(FILE_O)

fclean:	clean
	$(RMOV) $(NAME)

re:	fclean all

bonus: $(BONUS_O)
	   $(STAT) $(NAME) $(BONUS_O)


.PHONY:	all  clean fclean re bonus