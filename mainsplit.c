
#include "libft.h"
#include <stdio.h>
#include <stdlib.h>

void print_split(char **spl)
{
	int g = 0;
	while (spl[g] != NULL)
	{
		printf("%s\n", spl[g]);
		g++;
	}
}

int main(int argc, char **arg)
{
	if (argc <= 2)
		return 0;
	char **ss = ft_split(arg[1], arg[2][0]);
	print_split(ss);
	if (ss)
		for()
		free(ss);
}