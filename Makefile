CFLAGS : -Wall -Wextra -Werror

object_files := ft_bzero.o ft_isalnum.o ft_isalpha.o ft_isascii.o ft_isdigit.o ft_isprint.o ft_memchr.o ft_memcmp.o ft_memcpy.o ft_memmove.o ft_memset.o ft_strchr.o ft_strlcat.o ft_strlcpy.o ft_strlen.o ft_strncmp.o ft_strnstr.o ft_strrchr.o ft_tolower.o ft_toupper.o

libft.a : object_files
	gcc $(CFLAGS) object_files -o libft.a

ft_bzero.o : ft_bzero.c
	gcc $(CFLAGS) -c ft_bzero.c -o ft_bzero.o


clean :
	rm -f *.o libft.a