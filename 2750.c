#include <stdio.h>

int		main(void)
{
	int n;
	int i;
	int j;
	int tmp;
	int num[1000];

	scanf("%d", &n);
	i = 0;
	while (i < n)
	{
		scanf("%d", &num[i]);
		i++;
	}
	i = 0;
	while (i < n)
	{
		j = 0;
		while (j < n)
		{
			if (j + 1 < n && num[j] > num[j + 1])
			{
				tmp = num[j + 1];
				num[j + 1] = num[j];
				num[j] = tmp;
			}
			j++;
		}
		i++;
	}
	i = 0;
	while (i < n)
	{
		printf("%d\n", num[i]);
		i++;
	}
	return 0;
}
