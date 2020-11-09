#include <stdio.h>

int		main(void)
{
	int a = 1;
	int b = 1;
	
	while (1)
	{
		scanf("%d %d", &a, &b);
		if (a == 0 && b == 0)
			break;
		printf("%d\n", a + b);
	}
	return 0;
}

/*int		main(void)
{
	int i = 0;
	int a[i];
	int b[i];
	int j;

	j = 0;
	while (a[i] != 0 && b[i] != 0)
	{
		scanf("%d %d", &a[i], &b[i]);
		i++;
	}
	while (j < i - 1)
	{
		printf("%d\n", a[j] + b[j]);
		j++;
	}
	return 0;
}*/
