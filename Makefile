##
## EPITECH PROJECT, 2022
## Find_biggest_square
## File description:
## Makefile
##

TARGET_NAME	=	find_square
SOURCE_DIR	=	src
OBJECT_DIR	=	objects
HEADER_DIR	=	include

vpath %.c $(SOURCE_DIR)

SOURCES_FILES =	src/change_into_bsq.c	\
				src/count_ln_clmn.c	\
				src/count_tab_line.c	\
				src/error.c	\
				src/generate_map.c	\
				src/main.c	\
				src/map_size.c	\
				src/mod_tab.c	\
				src/open_file.c	\
				src/rc_getnbr.c	\
				src/rc_print_tab_int.c	\
				src/rc_print_tab.c	\
				src/rc_putchar.c	\
				src/rc_putnbr.c	\
				src/rc_putstr.c	\
				src/rc_str_to_word_array.c	\
				src/rc_strcat.c	\
				src/rc_strcpy.c	\
				src/rc_strlen.c	\
				src/replace_string.c	\
				src/search_square.c	\
				src/solve_gen.c

OBJECTS	=	$(patsubst src/%.c, $(OBJECT_DIR)/%.o, $(SOURCES_FILES))

CC =	gcc

CFLAGS =	-I$(HEADER_DIR) \
			-W -Wall -Wextra -Werror \
			-Wno-unused-variable \
			-Wno-unused-parameter \
			-Wno-unused-but-set-variable \
			-Wno-unused-but-set-parameter \
			-g3

all:	directories $(TARGET_NAME)

directories: | $(SOURCE_DIR) $(OBJECT_DIR)

clean:
	@$(RM) -rf ./$(OBJECT_DIR)/*.o

fclean: clean
	@$(RM) -rf ./$(OBJECT_DIR)
	@$(RM) -f ./$(TARGET_NAME)

re: fclean all
	@echo -e "\033[0;36m [Done] \033[0mredoing"

.PHONY: all clean fclean re

$(TARGET_NAME): $(OBJECTS)
	@$(CC) -o $(TARGET_NAME) $^
	@echo -e "🌑\e[35m -- BUILD SUCCESSFUL --\e[0m"

$(OBJECT_DIR):
	@mkdir -p $@

$(SOURCE_DIR):
	@echo "🌕\e[31m -- Error: source folder not found !\e[0m"

$(OBJECT_DIR)/%.o : %.c
	@$(CC) -c -o $@ $< $(CFLAGS)
	@echo -e "🌗\e[35m -- $@ successfully compiled --\e[0m"
