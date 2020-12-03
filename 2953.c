#include <stdio.h>

int		main(void)
{
	int p[5];
	int i;
	int j;
	int tmp1;
	int tmp2;

	i = 0;
	j = 0;
	while (i < 5)
	{
		tmp1 = 0;
		while (j < 4)
		{
			scanf("%d", &p[i]);
			tmp1 += p[i];
			j++;
		}
		p[i] = tmp1;
		j = 0;
		i++;
	}
	i = 0;
	tmp2 = 0;
	while (i < 5)
	{
		j = 0;
		while (j < 5)
		{
			if (p[i] > tmp2 && p[i] > p[j])
			{
				tmp1 = i;
				tmp2 = p[i];
			}
			j++;
		}
		i++;
	}
	printf("%d %d\n", tmp1 + 1, tmp2);
	return 0;
}
