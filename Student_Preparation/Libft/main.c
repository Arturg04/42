#include "libft.h"
#include <stdio.h>
#include <unistd.h>

int main(void) {
	char teste[10];

	ft_memset(teste, 'c', 10);
	ft_bzero(teste, 10);
	ft_memcpy(teste, "ab", 10);
}

