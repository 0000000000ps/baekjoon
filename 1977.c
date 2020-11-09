#include <stdio.h>

int		main(void)
{
	int m, n;
	int tmp = 0;
	int num = 1;
	int min = 0;

	scanf("%d", &m);
	scanf("%d", &n);
	while (num <= 10000)
	{
		if (num * num >= m && num * num <= n)
		{
			if (min == 0)
				min = num * num;
			tmp = num * num + tmp;
		}
		num++;
	}
	if (tmp == 0)
	{
		puts("-1");
		return (0);
	}
	printf("%d\n", tmp);
	printf("%d\n", min);
	return 0;
}
