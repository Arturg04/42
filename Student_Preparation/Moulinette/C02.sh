#!/bin/bash

# Define color variables
GREEN="\e[32m"
RED="\e[31m"
DEFAULT="\e[0m"

total=0
count=1
value=0

src=~/Piscine_Moulinette/C02
dest=temp/C02

run_tests_for_C02()
{
	mkdir temp
	cp -R "$src" "$dest"

	run_norminette
	# ex00
	ex=ex00
	file=ft_strcpy.c
	tester=ft_strcpy.o
	value=5
	test_ex "$ex"/"$file" "$dest"/"$ex"/"$tester" "$dest"/"$ex"/main.o

	# ex01
	ex=ex01
	file=ft_strncpy.c
	tester=ft_strncpy.o
	value=5
	test_ex "$ex"/"$file" "$dest"/"$ex"/"$tester" "$dest"/"$ex"/main.o

	# ex02
	ex=ex02
	file=ft_str_is_alpha.c
	tester=ft_str_is_alpha.o
	value=5
	test_ex "$ex"/"$file" "$dest"/"$ex"/"$tester" "$dest"/"$ex"/main.o

	# ex03
	ex=ex03
	file=ft_str_is_numeric.c
	tester=ft_str_is_numeric.o
	value=5
	test_ex "$ex"/"$file" "$dest"/"$ex"/"$tester" "$dest"/"$ex"/main.o

	# ex04
	ex=ex04
	file=ft_str_is_lowercase.c
	tester=ft_str_is_lowercase.o
	value=5
	test_ex "$ex"/"$file" "$dest"/"$ex"/"$tester" "$dest"/"$ex"/main.o

	# ex05
	ex=ex05
	file=ft_str_is_uppercase.c
	tester=ft_str_is_uppercase.o
	value=5
	test_ex "$ex"/"$file" "$dest"/"$ex"/"$tester" "$dest"/"$ex"/main.o

	# ex06
	ex=ex06
	file=ft_str_is_printable.c
	tester=ft_str_is_printable.o
	value=5
	test_ex "$ex"/"$file" "$dest"/"$ex"/"$tester" "$dest"/"$ex"/main.o

	# ex07
	ex=ex07
	file=ft_strupcase.c
	tester=ft_strupcase.o
	value=5
	test_ex "$ex"/"$file" "$dest"/"$ex"/"$tester" "$dest"/"$ex"/main.o

	# ex08
	ex=ex08
	file=ft_strlowcase.c
	tester=ft_strlowcase.o
	value=5
	test_ex "$ex"/"$file" "$dest"/"$ex"/"$tester" "$dest"/"$ex"/main.o

	# ex09
	ex=ex09
	file=ft_strcapitalize.c
	tester=ft_strcapitalize.o
	value=5
	test_ex "$ex"/"$file" "$dest"/"$ex"/"$tester" "$dest"/"$ex"/main.o

	# ex10
	ex=ex10
	file=ft_strlcpy.c
	tester=ft_strlcpy.o
	value=15
	test_ex "$ex"/"$file" "$dest"/"$ex"/"$tester" "$dest"/"$ex"/main.o

	# ex11
	ex=ex11
	file=ft_putstr_non_printable.c
	tester=ft_putstr_non_printable.o
	value=15
	test_ex "$ex"/"$file" "$dest"/"$ex"/"$tester" "$dest"/"$ex"/main.o

	# ex12
	ex=ex12
	file=ft_print_memory.c
	tester=ft_print_memory.o
	value=20
	test_ex "$ex"/"$file" "$dest"/"$ex"/"$tester" "$dest"/"$ex"/main.o

	rm -r -f temp

	if [ $total -gt 49 ]; then
		echo ""
		echo -e "${GREEN}*****You Pass C00 with $total points*****${DEFAULT}"
		echo ""
	else
		echo ""
		echo -e "${RED}*****You Failed C00 with $total points*****${DEFAULT}"
		echo ""


	fi
}

run_norminette()
{

	if command -v norminette &> /dev/null; then
		if norminette ; then
			echo ""
			echo -e "${GREEN}Norminette checks passed${DEFAULT}"
			echo ""
			return 1
		else
			echo ""
			echo -e "${RED}Norminette checks failed${DEFAULT}"
			echo ""
			return 0
		fi
	else
		echo "Norminette not found, skipping norminette checks"
		return 2
	fi
}

compile()
{
	local filename="$1"
	local mainfile="$2"
	local outputname="$3"

	cc -Wextra -Werror -Wall "$filename" "$mainfile" -o "$outputname"

	local exit_status="$?"

	return "$exit_status"
}

test_ex()
{
	local ex="$1"
	local template="$2"
	local main="$3"
	local file_test=temp/C02/test.out
	local file_final=temp/C02/final.out

	compile "$ex" "$main" "$file_test"
	if [ $? -ne 0 ]; then
		echo -e "${RED}Compilation failed${DEFAULT}"
	return 0
	fi
	compile "$template" "$main" "$file_final"

	./"$file_final" > "temp/output_final.txt"
	./"$file_test" > "temp/output_test.txt"

	# if [ $? -eq 124 ]; then
	# 	echo -e "${RED}----- ${ex} -> TIMEOUT (exceeded 10 seconds) ----- ${DEFAULT}"
	# else
		if diff "temp/output_final.txt" "temp/output_test.txt" &> /dev/null; then
			echo -e "${GREEN}----- ${ex} -> CORRECT ----- ${DEFAULT}"

			if [ $count -eq 1 ]; then
				total=$((total + value))
			fi
		else
			echo -n "+ "
			cat -e "temp/output_final.txt"
			echo ""
			echo -n "- "
			cat -e "temp/output_test.txt"
			echo ""
			echo -e "${RED}----- ${ex} -> FAIL ----- ${DEFAULT}"
			count=0
			fi
	# fi

	rm -f "$file_test"  "$file_final"
}



run_tests_for_C02
