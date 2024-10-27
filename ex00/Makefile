CXX				= c++
CXXFLAGS		= -Wall -Wextra -Werror -std=c++98 -fsanitize=address
RM				= rm -fr
INC				= -I Fixed.hpp
NAME			= FirstOCF

SOURCES			= main.cpp Fixed.cpp

SOURCES_O		= $(SOURCES:.cpp=.o)

all:			$(NAME)

$(NAME):	$(SOURCES)
	@$(CXX) $(CFLAGS) $(INC) $(SOURCES) -o $(NAME)

clean:
	@$(RM) $(SOURCES_O)

fclean:			clean
	@$(RM) $(NAME)

re:				fclean $(NAME)

exe:
	clear
	@$(RM) $(SOURCES_O)
	@$(RM) $(NAME)
	@$(CXX) $(CFLAGS) $(INC) $(SOURCES) -o $(NAME)
	@./$(NAME)

.PHONY:			all clean fclean re exe