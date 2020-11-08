#include <stdio.h>

int		main(void)
{
	int		n;
	int		i = 1;
	int		a = 0;
	int		b = 1;
	int		tmp;

	scanf("%d", &n);

	if (n < 2)
		return (-1);
	while (i < n)
	{
		tmp = b;
		b = a + b;
		a = tmp;
		i++;
	}
	printf("%d\n", b);
	return 0;
}
