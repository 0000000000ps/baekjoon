#include <stdio.h>

int		main(void)
{
	int num[3];
	int tmp;
	int i;
	int j;

	i = 0;
	scanf("%d %d %d", &num[0], &num[1], &num[2]);
	while (i < 3)
	{
		j = 0;
		while (j < 3)
		{
			if (j + 1 < 3 && num[j] > num[j + 1])
			{
				tmp = num[j + 1];
				num[j + 1] = num[j];
				num[j] = tmp;
			}
			j++;
		}
		i++;
	}
	printf("%d %d %d\n", num[0], num[1], num[2]);
	return 0;
}
