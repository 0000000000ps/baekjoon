#include <stdio.h>

int		main(void)
{
	int n;
	int m;
	int i;
	int j;

	i = 0;
	scanf("%d", &n);
	m = n;
	while (i < n)
	{
		j = 0;
		while (j < i)
		{
			printf(" ");
			j++;
		}
		j = 0;
		while (j < m)
		{
			printf("*");
			j++;
		}
		m -= 1;
		printf("\n");
		i++;
	}
	return 0;
}
