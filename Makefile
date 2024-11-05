CFLAGS := -Wall -Wextra -Werror

OBJ := ft_bzero.o ft_isalnum.o ft_isalpha.o ft_isascii.o ft_isdigit.o ft_isprint.o ft_memchr.o ft_memcmp.o ft_memcpy.o ft_memmove.o ft_memset.o ft_strchr.o ft_strlcat.o ft_strlcpy.o ft_strlen.o ft_strncmp.o ft_strnstr.o ft_strrchr.o ft_tolower.o ft_toupper.o
NAME = libft.a

all:$(NAME)

$(NAME1) : $(OBJ)
	gcc $(CFLAGS) $(OBJ) -o libft.a

%.o : %.c
	gcc $(CFLAGS) -c $< -o $@


clean :
	rm -f *.o

fclean : clean
	rm -f libft.a