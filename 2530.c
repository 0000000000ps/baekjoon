#include <stdio.h>

int		main(void)
{
	int a, b, c, d;
	int i;

	i = 0;
	scanf("%d %d %d", &a, &b, &c);
	scanf("%d", &d);
	while (i < d)
	{
		c += 1;
		if (c == 60)
		{
			b += 1;
			c = 0;
		}
		if (b == 60)
		{
			a += 1;
			b = 0;
		}
		if (a == 24)
		{
			a = 0;
		}
		i++;
	}
	printf("%d %d %d\n", a, b, c);
	return 0;
}
