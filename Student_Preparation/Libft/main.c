/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Arturg04 <artur.13.goncalves@gmail.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/28 21:57:51 by Arturg04          #+#    #+#             */
/*   Updated: 2023/10/01 21:59:52 by Arturg04         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int	main(void)
{
	test_ft_atoi();
	test_ft_bzero();
	test_ft_calloc();
	test_ft_isalnum();
	test_ft_isalpha();
	test_ft_isascii();
	test_ft_isdigit();
	test_ft_isprint();
	test_ft_memccpy();
	test_ft_memchr();
	test_ft_memcpy();
	test_ft_memcmp();
	test_ft_memmove();
	test_ft_memset();
	test_ft_strchr();
	test_ft_strdup();
	test_ft_strlcat();
	test_ft_strlcpy();
	test_ft_strlen();
	test_ft_strnstr();
	test_ft_strncmp();
	test_ft_strrchr();
	test_ft_tolower();
	test_ft_toupper();

	return (0);
}

void	test_ft_atoi()
{
	printf("Testing ft_atoi...\n");

	printf("%d\n%d\n%d\n",
		ft_atoi("2147483647"),
		ft_atoi("-2147483648"),
		ft_atoi("2147483649"));
}

void	test_ft_bzero()
{
	char	bzero[10];

	printf("Testing ft_bzero...\n");
	strcpy(bzero, "123456789");
	ft_bzero(bzero, 10);
	printf("%.10s\n", bzero);
}

void	test_ft_calloc()
{
	char	*p;

	printf("Testing ft_calloc...\n");
	p = ft_calloc(10, 10);
	printf("%.100s\n", p);

}

void	test_ft_isalnum()
{
	printf("Testing ft_isalnum...\n");
	printf("%d\n%d\n%d\n%d\n%d\n",
		ft_isalnum('a'),
		ft_isalnum('Z'),
		ft_isalnum(' '),
		ft_isalnum('0'),
		ft_isalnum('9'));
}

void	test_ft_isalpha() {
	printf("Testing ft_isalpha...\n");
	printf("%d\n%d\n%d\n%d\n%d\n",
		ft_isalpha('a'),
		ft_isalpha('Z'),
		ft_isalpha(' '),
		ft_isalpha('0'),
		ft_isalpha('9'));
}

void	test_ft_isascii() {
	printf("Testing ft_isascii...\n");
	printf("%d\n%d\n%d\n%d\n%d\n",
		ft_isascii('\300'),
		ft_isascii('Z'),
		ft_isascii(' '),
		ft_isascii('0'),
		ft_isascii('9'));
}

void	test_ft_isdigit() {
	printf("Testing ft_isdigit...\n");
	printf("%d\n%d\n%d\n%d\n%d\n",
		ft_isdigit('a'),
		ft_isdigit('Z'),
		ft_isdigit(' '),
		ft_isdigit('0'),
		ft_isdigit('9'));
}

void	test_ft_isprint() {
	printf("Testing ft_isprint...\n");
	printf("%d\n%d\n%d\n%d\n%d\n",
		ft_isdigit('\20'),
		ft_isdigit('Z'),
		ft_isdigit(' '),
		ft_isdigit('0'),
		ft_isdigit('9'));
}

void	test_ft_memccpy()
{
	char	memccpy[10];

	printf("Testing ft_memccpy...\n");
	ft_memccpy(memccpy, "123456789", '3', 10);
	printf("%.10s\n", memccpy);
}

void test_ft_memchr() {
    printf("Testing ft_memchr...\n");

    // Test cases for ft_memchr
    // Add test cases and expected results here
}

void test_ft_memcpy() {
    printf("Testing ft_memcpy...\n");

    // Test cases for ft_memcpy
    // Add test cases and expected results here
}

void test_ft_memcmp() {
    printf("Testing ft_memcmp...\n");

    // Test cases for ft_memcmp
    // Add test cases and expected results here
}

void test_ft_memmove() {
    printf("Testing ft_memmove...\n");

    // Test cases for ft_memmove
    // Add test cases and expected results here
}

void test_ft_memset() {
    printf("Testing ft_memset...\n");

    // Test cases for ft_memset
    // Add test cases and expected results here
}

void test_ft_strchr() {
    printf("Testing ft_strchr...\n");

    // Test cases for ft_strchr
    // Add test cases and expected results here
}

void test_ft_strdup() {
    printf("Testing ft_strdup...\n");

    // Test cases for ft_strdup
    // Add test cases and expected results here
}

void test_ft_strlcat() {
    printf("Testing ft_strlcat...\n");

    // Test cases for ft_strlcat
    // Add test cases and expected results here
}

void test_ft_strlcpy() {
    printf("Testing ft_strlcpy...\n");

    // Test cases for ft_strlcpy
    // Add test cases and expected results here
}

void test_ft_strlen() {
    printf("Testing ft_strlen...\n");

    // Test cases for ft_strlen
    // Add test cases and expected results here
}

void test_ft_strnstr() {
    printf("Testing ft_strnstr...\n");

    // Test cases for ft_strnstr
    // Add test cases and expected results here
}

void test_ft_strncmp() {
    printf("Testing ft_strncmp...\n");

    // Test cases for ft_strncmp
    // Add test cases and expected results here
}

void test_ft_strrchr() {
    printf("Testing ft_strrchr...\n");

    // Test cases for ft_strrchr
    // Add test cases and expected results here
}

void test_ft_tolower() {
    printf("Testing ft_tolower...\n");

    // Test cases for ft_tolower
    // Add test cases and expected results here
}

void test_ft_toupper() {
    printf("Testing ft_toupper...\n");

    // Test cases for ft_toupper
    // Add test cases and expected results here
}
