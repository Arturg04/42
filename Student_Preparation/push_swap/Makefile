# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ade-pinh <artur.13.goncalves@gmail.com>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/10/18 08:42:34 by ade-pinh          #+#    #+#              #
#    Updated: 2023/10/18 11:10:38 by ade-pinh         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

### ---------- TEXT FORMATTING AND COLORS ---------- ###

# Text Colors
Black					=\033[0;30m
Red						=\033[0;31m
Green					=\033[0;32m
Yellow					=\033[0;33m
Blue					=\033[0;34m
Magenta					=\033[0;35m
Cyan					=\033[0;36m
White					=\033[0;37m

# Bright Text Colors
Bright_Black			=\033[1;30m
Bright_Red				=\033[1;31m
Bright_Green			=\033[1;32m
Bright_Yellow			=\033[1;33m
Bright_Blue				=\033[1;34m
Bright_Magenta			=\033[1;35m
Bright_Cyan				=\033[1;36m
Bright_White			=\033[1;37m

# Background Colors
Background_Black		=\033[40m
Background_Red			=\033[41m
Background_Green		=\033[42m
Background_Yellow		=\033[43m
Background_Blue			=\033[44m
Background_Magenta		=\033[45m
Background_Cyan			=\033[46m
Background_White		=\033[47m

# Text Formatting Options
Reset					=\033[0m
Bold					=\033[1m
Dim						=\033[2m
Underline				=\033[4m
Blink					=\033[5m
Reverse					=\033[7m
Hidden					=\033[8m
StrikeThrough			=\033[9m
DoubleUnderline			=\033[21m
Framed					=\033[51m
Encircled				=\033[52m
Overlined				=\033[53m

### ------------------------------ ###

### ---------- LINUX ---------- ###
CC_LIN			= cc
AR				= ar rsc
### ------------------------------ ###

### ---------- WIN_32 ---------- ###
CC_WIN_32		= i686-w64-mingw32-gcc
### ------------------------------ ###

### ---------- WIN_64 ---------- ###
CC_WIN_64		= x86_64-w64-mingw32-gcc
### ------------------------------ ###

### ---------- OTHERS ---------- ###
NAME			= push_swap
CFLAGS			= -Werror -Wextra -Wall
INCLUDE			=
LIB				=
### ------------------------------ ###


### ---------- DIRECTORIES ---------- ###
DIR_INCLUDE		=
DIR_LIB			=
DIR_OBJ1		=
DIR_OBJ2		=
DIR_OBJ3		=
DIR_SRC1		=
DIR_SRC2		=
DIR_SRC3		=
### ------------------------------ ###

### ---------- FILES ---------- ###

SRC1			= /

SRC2			= /

SRC3			= /

OBJ1_LIN = $(patsubst $(DIR_SRC1)/%.c, $(DIR_OBJ1)/%.o, $(SRC1))
OBJ2_LIN = $(patsubst $(DIR_SRC2)/%.c, $(DIR_OBJ2)/%.o, $(SRC2))
OBJ3_LIN = $(patsubst $(DIR_SRC3)/%.c, $(DIR_OBJ3)/%.o, $(SRC3))

OBJ1_WIN_32 = $(patsubst $(DIR_SRC1)/%.c, $(DIR_OBJ1)/win32_%.o, $(SRC1))
OBJ2_WIN_32 = $(patsubst $(DIR_SRC2)/%.c, $(DIR_OBJ2)/win32_%.o, $(SRC2))
OBJ3_WIN_32 = $(patsubst $(DIR_SRC3)/%.c, $(DIR_OBJ3)/win32_%.o, $(SRC3))

OBJ1_WIN_64 = $(patsubst $(DIR_SRC1)/%.c, $(DIR_OBJ1)/win64_%.o, $(SRC1))
OBJ2_WIN_64 = $(patsubst $(DIR_SRC2)/%.c, $(DIR_OBJ2)/win64_%.o, $(SRC2))
OBJ3_WIN_64 = $(patsubst $(DIR_SRC3)/%.c, $(DIR_OBJ3)/win64_%.o, $(SRC3))

### ---------- FUNCTIONS ---------- ###
LIN_LIB			= $(NAME)
LIN_COMP		= $(NAME)
WIN_32_LIB		= $(NAME)
WIN_32_COMP		= $(NAME)
WIN_64_LIB		= $(NAME)
WIN_64_COMP		= $(NAME)

all: LIN_COMP

DIR:
	mkdir -p $(DIR_OBJ1)
	mkdir -p $(DIR_OB21)
	mkdir -p $(DIR_OBJ3)

LIN_LIB:$(OBJ1_LIN) $(OBJ2_LIN) $(OBJ3_LIN)
	$(AR) $@ $^
LIN_COMP: $(OBJ1_LIN) $(OBJ2_LIN) $(OBJ3_LIN)
	$(CC_LIN) $(CFLAGS) $(INCLUDE) $(LIB) $^ -o $@
$(DIR_OBJ1)/%.o: $(DIR_SRC1)/%.c
	$(CC_LIN) $(CFLAGS) $(INCLUDE) -c $< -o $@
$(DIR_OBJ2)/%.o: $(DIR_SRC2)/%.c
	$(CC_LIN) $(CFLAGS) $(INCLUDE) -c $< -o $@
$(DIR_OBJ3)/%.o: $(DIR_SRC3)/%.c
	$(CC_LIN) $(CFLAGS) $(INCLUDE) -c $< -o $@

WIN_32_LIB:$(OBJ1_WIN_32) $(OBJ2_WIN_32) $(OBJ3_WIN_32)
	$(AR) $@ $^
WIN_32_COMP: $(OBJ1_WIN_32) $(OBJ2_WIN_32) $(OBJ3_WIN_32)
	$(CC_LIN) $(CFLAGS) $(INCLUDE) $(LIB) $^ -o $@
$(DIR_OBJ1)/win32_%.o: $(DIR_SRC1)/%.c
	$(CC_WIN_32) $(CFLAGS) $(INCLUDE) -c $< -o $@
$(DIR_OBJ2)/win32_%.o: $(DIR_SRC2)/%.c
	$(CC_WIN_32) $(CFLAGS) $(INCLUDE) -c $< -o $@
$(DIR_OBJ3)/win32_%.o: $(DIR_SRC3)/%.c
	$(CC_WIN_32) $(CFLAGS) $(INCLUDE) -c $< -o $@

WIN_64_LIB:$(OBJ1_WIN_64) $(OBJ2_WIN_64) $(OBJ3_WIN_64)
	$(AR) $@ $^
WIN_64_COMP: $(OBJ1_WIN_64) $(OBJ2_WIN_64) $(OBJ3_WIN_64)
	$(CC_LIN) $(CFLAGS) $(INCLUDE) $(LIB) $^ -o $@
$(DIR_OBJ1)/win64_%.o: $(DIR_SRC1)/%.c
	$(CC_WIN_64) $(CFLAGS) $(INCLUDE) -c $< -o $@
$(DIR_OBJ2)/win64_%.o: $(DIR_SRC2)/%.c
	$(CC_WIN_64) $(CFLAGS) $(INCLUDE) -c $< -o $@
$(DIR_OBJ3)/win64_%.o: $(DIR_SRC3)/%.c
	$(CC_WIN_64) $(CFLAGS) $(INCLUDE) -c $< -o $@

clean:
	rm -f $(OBJ1_LIN) $(OBJ2_LIN) $(OBJ3_LIN) \
		$(OBJ1_WIN_32) $(OBJ2_WIN_32) $(OBJ3_WIN_32) \
		$(OBJ1_WIN_64) $(OBJ2_WIN_64) $(OBJ3_WIN_64)

fclean:	clean
	rm -f LIN_COMP WIN_32_COMP WIN_64_COMP LIN_LIB WIN_32_LIB WIN_64_LIB

teste:
	@echo "$(Black)Black$(Reset)"
	@echo "$(Red)Red$(Reset)"
	@echo "$(Green)Green$(Reset)"
	@echo "$(Yellow)Yellow$(Reset)"
	@echo "$(Blue)Blue$(Reset)"
	@echo "$(Magenta)Magenta$(Reset)"
	@echo "$(Cyan)Cyan$(Reset)"
	@echo "$(White)White$(Reset)"
	@echo "$(Bright_Black)Bright_Black$(Reset)"
	@echo "$(Bright_Red)Bright_Red$(Reset)"
	@echo "$(Bright_Green)Bright_Green$(Reset)"
	@echo "$(Bright_Yellow)Bright_Yellow$(Reset)"
	@echo "$(Bright_Blue)Bright_Blue$(Reset)"
	@echo "$(Bright_Magenta)Bright_Magenta$(Reset)"
	@echo "$(Bright_Cyan)Bright_Cyan$(Reset)"
	@echo "$(Bright_White)Bright_White$(Reset)"
	@echo "$(Background_Black)Background_Black$(Reset)"
	@echo "$(Background_Red)Background_Red$(Reset)"
	@echo "$(Background_Green)Background_Green$(Reset)"
	@echo "$(Background_Yellow)Background_Yellow$(Reset)"
	@echo "$(Background_Blue)Background_Blue$(Reset)"
	@echo "$(Background_Magenta)Background_Magenta$(Reset)"
	@echo "$(Background_Cyan)Background_Cyan$(Reset)"
	@echo "$(Background_White)Background_White$(Reset)"
	@echo "$(Bold)Bold$(Reset)"
	@echo "$(Dim)Dim$(Reset)"
	@echo "$(Underline)Underline$(Reset)"
	@echo "$(Blink)Blink$(Reset)"
	@echo "$(Reverse)Reverse$(Reset)"
	@echo "$(Hidden)Hidden$(Reset)"
	@echo "$(StrikeThrough)StrikeThrough$(Reset)"
	@echo "$(DoubleUnderline)DoubleUnderline$(Reset)"
	@echo "$(Framed)Framed$(Reset)"
	@echo "$(Encircled)Encircled$(Reset)"
	@echo "$(Overlined)Overlined$(Reset)"