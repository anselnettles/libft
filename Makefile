# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aviholai <aviholai@student.hive.fi>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/01/18 15:29:53 by aviholai          #+#    #+#              #
#    Updated: 2022/02/23 12:12:57 by aviholai         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#	//update.22.02.22// Moulinette aborts compiling when encounters 'sleep', so
#	that had to be removed. The following lines on rule $(NAME) had to be
#	removed, for they did not work as intended on Linux OS.
#	('mv' not able to rename the '.h' file and the '.bak' caused issues
#	in renaming the included libraries.)
#	@printf "	${PL}	${O}Ｃｏｎｆｉｒｍｉｎｇ ＮＡＭＥ.					${PR}"
#	@printf "	${PL}		${G}| Renaming header file and fixing references		${PR}"
#	@printf "	${PL}		${G}| in sources.						${PR}"
#	@mv *.h $(TITLE).h
#	@sed -i .bak "s/#include \".*/#include \"\$(TITLE).h\"/g" $(SRC)

#	You may change the TITLE of the project to your liking. It will affect the
#	header's (.h) filename and all references to it in SRC files upon 
#	running $(NAME).(//not on this version//)

TITLE	=	libft

NAME	=	$(TITLE).a

SRC		=	ft_memset.c\
			ft_bzero.c\
			ft_memcpy.c\
			ft_memccpy.c\
			ft_memmove.c\
			ft_memchr.c\
			ft_memcmp.c\
			ft_strlen.c\
			ft_strdup.c\
			ft_strcpy.c\
			ft_strncpy.c\
			ft_strcat.c\
			ft_strncat.c\
			ft_strlcat.c\
			ft_strchr.c\
			ft_strrchr.c\
			ft_strstr.c\
			ft_strnstr.c\
			ft_strcmp.c\
			ft_strncmp.c\
			ft_atoi.c\
			ft_isalpha.c\
			ft_isdigit.c\
			ft_isalnum.c\
			ft_isascii.c\
			ft_isprint.c\
			ft_toupper.c\
			ft_tolower.c\
			ft_memalloc.c\
			ft_memdel.c\
			ft_strnew.c\
			ft_strdel.c\
			ft_strclr.c\
			ft_striter.c\
			ft_striteri.c\
			ft_strmap.c\
			ft_strmapi.c\
			ft_strequ.c\
			ft_strnequ.c\
			ft_strsub.c\
			ft_strjoin.c\
			ft_strtrim.c\
			ft_strsplit.c\
			ft_itoa.c\
			ft_putchar.c\
			ft_putstr.c\
			ft_putendl.c\
			ft_putnbr.c\
			ft_putchar_fd.c\
			ft_putstr_fd.c\
			ft_putendl_fd.c\
			ft_putnbr_fd.c

OBJ		=	$(SRC:.c=.o)

LISTSRC	=	$(foreach part,$(SRC), 	$(PL)		${G}| $(part)						${PR})

#	Running 'make' runs 'all' content: the 'art_header', '$(NAME)' and
#	'art_footer' rules, effectively building the whole archive.

all:		$(NAME)

#	Run '$(NAME)' to run compile an archive with demanded check-ups and filters.
#	Firstly, the rule will intialize a complete rewrite of the header's (.h)
#	filename and all references to it in the 'SRC' files by utilizing the
#	UNIX 'mv' and 'sed' commands.
#	The compiled objects are created with the 'gcc' command's  '-c' flag,
#	with the source files from the afore listed address 'SRC'.
#	Creates the library with the command 'ar', the flag '-r' forcing the
#	compilation of the library, replacing existing archive member files if
#	there happen to be any. When finished, prints the table of contents with
#	the flag '-t'.

$(NAME):
	@$(ARTHEAD)
	@printf "	${PL}									${PR}"
	@printf "	${PL}	${O}Ｃｏｍｐｉｌｉｎｇ.						${PR}"
	@printf "	${PL}		${G}| Creating objects and archives with the		${PR}"
	@printf "	$(PL)		${G}| following source files:				${PR}"
	@printf "$(LISTSRC)"
	@gcc -Wall -Wextra -Werror -Wconversion -c $(SRC)
	@printf "	${PL}		${G}| Source files compiled to object files with 'gcc'.	${PR}"
	@printf "	${PL}		${G}| " ; ar -r $(TITLE).a $(OBJ) ; printf "\n"
	@printf "	${PL}									${PR}"
	@printf "	${PL}	${O}Ｆｉｎｉｓｈｅｄ ａｒｃｈｉｖｅ.				${PR}"
	@printf "	${PL}		${G}| Archive $(TITLE).a compiled with 'ar'.			${PR}"
	@printf "	${PL}									${PR}"
	@$(ARTFOOTER)

#	The 'clean' command removes the compiled object files.
#	'rm', the remove command, with flags '-v' (verbose, lists the said files)
#	and '-f' (forcefully remove without prompts.)
#	The 'fclean' command also removes the compiled program and static libraries.

clean:
		@echo "${O}\n	Ｒｅｇｕｌａｒ ｃｌｅａｎ－ｕｐ.    | Removing objects, backups and temporary files.\n${G}"
		@rm -v -f $(OBJ)
		@rm -v -f *.bak
		@rm -v -f *~

fclean:	clean
		@echo "${O}\n	Ｆｕｌｌ ｃｌｅａｎ－ｕｐ.    | Removing compiles and archives.\n${G}"
		@rm -v -f $(TITLE).a
		@rm -v -f $(TITLE).h.gch

#	The 're' command runs everything from scratch. That is 'fclean' and 'make'.

re:		fclean
		@echo "${O}\n	Ｒｅ－ｒｕｎ.    | After a full clean-up, running a recompile.\n${G}"
		@$(MAKE)

#	Colors and visual effects. Used for more clearer visual representation.
#	'NOC' stand for "no color", 'O' for orange, 'G' for gray,
#	'DG' for dark gray, 'R' for red and 'GN' for green. 'PL' stand for
#	"pillar left" and 'PR' for "pillar right".

NOC		=	\033[0m
O		=	\033[0;33m
G		=	\033[0;37m
R		=	\033[1;31m
GN		=	\033[1;32m

PL		=	\033[1;31m▒▒▒▒░░
PR		=	\033[1;31m      ▒▒▒▒\n

#	The ASCII art used for enhancing the user experience. Header and footer
#	are called upon rule '$(NAME)' start and end.

ARTHEAD	=	echo "${R}\n" \
			"▒▒░░                                                                                          ░░▒▒\n"\
			"  ▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒\n"\
			"  ▒▒██████████████████████████████████████████████████████████████████████████████████████▓▓██░░\n"\
			"  ░░▒ aviholai@student.hive.fi ▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒   /|,_ _ _ |  |\ | _ |-|-| _  _  ▒▒░░\n"\
			"  ▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒  /-|||_\(/_|  | \|(/_|_|_|(/__\  ▒▒░░\n"\
			"  ░░▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▓▓▓▓▒▒▓▓▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓░░\n"\
			"  ▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▓▓▒▒░░▓▓▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒\n"\
			"    ░░░░░░░░░░░░░░▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▓▓▓▓▓▓▓▓▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒░░░░░░░░░░\n"\
			"	▒▒▒▒▒▒                               ▓▓▒▒██▓▓░░                             ▓▓▒▒▒▒\n"\
			"    ▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▓▓▒▒▓▓▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▓▓▒▒▒▒▒▒▒▒▒▒░░░░\n"\
			"  ▒▒▒▒▒▒▓▓▒▒▓▓▒▒▒▒▓▓▒▒▓▓▒▒▒▒▒▒▒▒▒▒▒▒▒▒▓▓▓▓▓▓▓▓▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▓▓▓▓▒▒▒▒▓▓▒▒▓▓▒▒▒▒▒▒▒▒▒▒\n"\
			"  ▒▒▒▒▒▓▓▒▒▓▓▓▓▒▒▒▒▓▓▓▓▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▓▓▓▓▓▓▒▒▒▒▓▓▒▒▒▒▓▓▒▒▒▒▒▒▒\n"\
			"  ░░   ▒▒▒▒░░									    ░░▒▒▒▒     ░░\n"\
			"	▒▒▒▒░░									      ▒▒▒▒"


ARTFOOTER	=	echo "${R}	▒▒▒▒░░               ██                          ██                           ▒▒▒▒\n"\
				"${R}	▒▒▒▒░░                 ██████████████████████████                             ▒▒▒▒\n"\
				"${R}	▒▒▒▒░░                   ▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓                               ▒▒▒▒\n"\
				"${R}	▒▒▒▒░░                     ▓▓      ██      ▓▓                                 ▒▒▒▒\n"\
				"${R}	▒▒▒▒░░                   ▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓                               ▒▒▒▒\n"\
				"${R}	▒▒▒▒░░                     ▓▓              ▓▓                                 ▒▒▒▒\n"\
				"${R}	▒▒▒▒░░                     ▓▓              ▓▓                                 ▒▒▒▒\n"\
				"${R}	▒▒▒▒░░                     ▓▓              ▓▓                                 ▒▒▒▒\n"\
				"${R}	▒▒▒▒░░           $(GN)▒▒        ${R}▓▓              ▓▓        $(GN)▒▒                       ${R}▒▒▒▒\n"\
				"${R}	▒▒▒▒░░   $(GN)▒▒      ▒▒        ${R}▓▓              ▓▓      $(GN)▒▒▒▒      ▒▒               ${R}▒▒▒▒\n"\
				"${R}	▒▒▒▒░░   $(GN)▒▒    ▒▒▒▒        ${R}▓▓              ▓▓      $(GN)▒▒▒▒▒▒    ▒▒               ${R}▒▒▒▒\n"\
				"${R}	▒▒▒▒░░   $(GN)▒▒▒▒  ▒▒▒▒▒▒      ${R}▓▓              ▓▓    $(GN)▒▒▒▒▒▒▒▒▒▒  ▒▒▒▒             ${R}▒▒▒▒\n"\
				"${R}	▒▒▒▒░░ $(GN)▒▒▓▓▒▒▒▒▒▒▒▒▒▒░░▒▒▒▒▒▒▒▒░░▒▒░░░░░░░░▒▒░░░░░░▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒           ${R}▒▒▒▒\n"\
				"${R}	▒▒▒▒░░ $(GN)▒▒▓▓▒▒░░░░░░░░░░▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒░░░░░░░░▒▒▒▒▒▒▒▒▒▒▒▒▒▒           ${R}▒▒▒▒\n"\
				"${R}	▒▒▒▒░░ $(GN)▒▒░░░░░░░░░░░░░░░░░░░░▒▒▒▒▒▒░░░░░░▒▒░░░░░░░░░░▒▒░░░░░░░░▒▒▒▒▒▒         ${R}▒▒▒▒\n"\
				"${R}	▒▒▒▒░░ $(GN)░░░░░░░░░░░░░░░░░░░░▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒░░░░░░░░░░░░░░░░░░░░░░░░▒▒       ${R}▒▒▒▒\n"\
				"${R}	▒▒▒▒░░ $(GN)░░░░░░░░░░░░░░░░░░░░▒▒▒▒▒▒░░░░░░░░░░▒▒░░░░░░░░░░░░░░░░░░░░░░░░░░▒▒     ${R}▒▒▒▒\n"\
				"${R}    $(GN)░░ ${R}▒▒▒▒░░ $(GN)░░░░░░░░░░░░░░░░░░▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒░░░░░░░░▒▒░░░░░░░░░░▒▒▒▒▒▒▒▒ ${R}▒▒▒▒\n"\
				"${R}  $(GN)▒▒▒▒ ${R}▒▒▒▒░░ $(GN)░░░░░░░░░░░░░░░░░░░▒▒▒▒▒▒░░░░░░░░░░░░░░▒▒░░░░░░░░░░░░░░░░░░▒▒▒▒░░▒▒▒▒▒ ${R}▒▒▒▒ $(GN)░░\n"\
				"${R}  $(GN)▒▒▒▒ ${R}▒▒▒▒░░ $(GN)░▒▒▒▒░░░░░░░░░░░░▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒░░░░░░░░░░▒▒▒▒░░▒▒▒▒▒▒▒▒▒▒▒ ${R}▒▒▒▒ $(GN)▒▒\n"\
				"${R}  $(GN)▓▓░░ ${R}▒▒▒▒░░ $(GN)▒▒▒▒▒▒▒▒▒▒▒▒▒░░▒▒▒▒▒▒▒▒░░░░░░░░░░░░░░░░░░▒▒▒▒▒▒▒▒▒▒▒▒░░░░▒▒▒▒▒▒▒▒▒▒▒▒▒ ${R}▒▒▒▒ $(GN)▓▓\n"\
				"${R}    $(GN)▓▓ ${R}▒▒▒▒░░ $(GN)▒▒▒▒▒▒░░▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▓▓▓▓ ${R}▒▒▒▒\n"\
				"${R}	▒▒▒▒░░ $(GN)▓▓▒▒░░▒▒▒▒▒▒▒▒▒▒▒▒▒▒░░░░░░░░░░░░░░░░░░░░░░▒▒▒▒░░▒▒▒▒▒▒▒▒▒▒▒▒▒▒▓▓▓▓     ${R}▒▒▒▒\n"\
				"${R}	▒▒▒▒░░   $(GN)▒▒▓▓▒▒▒▒░░▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒░░▒▒▓▓▓▓         ${R}▒▒▒▒\n"\
				"${R}	▒▒▒▒░░       $(GN)▒▒▓▓▓▓▓▓▒▒▒▒░░░░░░░░░░░░░░░░░░░░░░░░░░▒▒▒▒▒▒▓▓▓▓▓▓▓▓             ${R}▒▒▒▒\n"\
				"${R}	▒▒▒▒░░               $(GN)▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓                     ${R}▒▒▒▒\n"\
				"${R}	▒▒▒▒░░									      ▒▒▒▒"

#	The '.PHONY' target exists to avoid conflict with files of the same name.

.PHONY:	all	clean	fclean	re
