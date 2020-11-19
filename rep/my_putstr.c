#include <unistd.h>
#include <stdio.h>

int	my_putstr(char const *str)
{
	int j;

	j = 0;
	while (str[j] != '\0')
	{
		ft_putchar(str[j]);
		j++;
	}
}
