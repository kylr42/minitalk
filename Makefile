SERVER = server
CLIENT = client

all :
	@make -C libft
	gcc -Wall -Wextra -Werror server.c libft/libft.a -o $(SERVER)
	gcc -Wall -Wextra -Werror client.c libft/libft.a -o $(CLIENT)

clean :
	@make clean -C libft
	rm -rf client.o server.o

fclean : clean
	@make fclean -C libft
	rm -rf $(SERVER) $(CLIENT)

re : fclean all