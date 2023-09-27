#include <unistd.h>

int main(void)
{
	int i = 0;
	char a = 'a';

	while (a <= 'z')
	{
		if(i % 2)
			write(1, &a,1);
		else
			write(1, &a - 32, 1);
		a++;
		i++;
	}
	write(1, "\n",1);
	return (0);
}
