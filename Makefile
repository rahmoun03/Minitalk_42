SRC = ft_putchar.c ft_putnbr.c ft_putstr.c ft_printf.c ft_putunsigned.c ft_printhexa.c ft_strlen.c
FLAGS = -Wall -Wextra -Werror
SRC_CLIENT = client.c ${SRC}
SRC_SERVER = server.c ${SRC}

all :  server client

client : ${SRC_CLIENT} 
	@cc ${FLAGS}  ${SRC_CLIENT} -o $@
	@tput setaf 2; echo "The client is ready"
server : ${SRC_SERVER} 
	@cc ${FLAGS}  ${SRC_SERVER} -o $@
	@tput setaf 2; echo "The server is ready"
clean :
	@rm -rf server client
	@tput setaf 1; echo "The server and client have been deleted"
fclean :clean

re :fclean all
