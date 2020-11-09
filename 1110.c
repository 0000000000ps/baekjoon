#include <stdio.h>

int		main(void)
{
	int n;
	int a1, a2, c;
	int i = 0;

	scanf("%d", &n);
	a1 = n / 10;
	a2 = n % 10;
	while (1)
	{
		c = a1 + a2;
		i++;
		if (n == a2 * 10 + c % 10)
			break;
		else
		{
			a1 = a2;
			a2 = c % 10;
		}
	}
	printf("%d\n", i);
	return 0;
}
