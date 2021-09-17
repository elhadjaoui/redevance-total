NAME =			mendoub

CC =			gcc 

FLAGS =			-Wall -Wextra -Werror

RM =			rm -rf


DIR_HEADERS =
SANITIZE = -fsanitize=address
		

SRC =			mendoub.c

		
all:			$(NAME)

$(NAME) :		
				@make -C ./libft
				@cp ./libft/libft.a libft.a
				@$(CC) $(FLAGS) $(SRC) -I mendoub.h  libft.a  -o $(NAME)


clean:
				@make clean -C ./libft

fclean:			clean
			
				@make fclean -C ./libft
				@$(RM) libft.a
				@$(RM) $(NAME)
				
re:				fclean all

.PHONY:			all, clean, fclean, re