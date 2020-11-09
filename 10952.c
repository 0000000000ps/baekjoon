#include <stdio.h>

int    main(int ac, char *av[])
{
	int i;
	int j;
	int a;
	int b;
	
	i = 0;
	j = 0;
	a = 0;
	b = 0;
	while (!(av[1][i] == 0 && av[2][i] == 0))
	{
		scanf("%c %c", &av[1][i], &av[2][i]);
		if (av[1][i] == '0' && av[2][i] == '0')
			break;
		i++;
	}
	while (a[

	while (j < i)
	{
		printf("%d\n", av[1][j] + av[2][j]);
		j++;
	}
	return (0);
}
