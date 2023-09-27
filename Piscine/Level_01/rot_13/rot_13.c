#include <unistd.h>

void root13(char c)
{
	int j = 0;
	while (j < 13)
	{
		if (c == 'z')
			c = 'a';
		else if (c == 'Z')
			c = 'A';
		else
			c++;
		j++;
	}
	write (1, &c, 1);
}

int main(int ac, char **av)
{
	int i = 0;
	if(ac != 2)
	{
		write(1, "\n",1);
		return (0);
	}
	while (av[1][i])
	{
		if ((av[1][i] >= 'a' && av[1][i] <= 'z') || (av[1][i] >= 'A' && av[1][i] <= 'Z'))
		{
			root13(av[1][i]);
		}
		else
		{
			write(1, &av[1][i],1);
		}
		i++;
	}
}
