#include <stdio.h>

int		main(void)
{
	int i = 0;
	int j = 0;
	int n;
	int a[i];
	int tmp;

	scanf("%d", &n);
	if (!(n >= 1 && n <= 1000000))
		return 0;
	while (i < n)
	{
		scanf("%d", &a[i]);
		i++;
	}
	i = 0;
	while (i < n - 1)
	{
		while (j < n - 1)
		{
			if (a[j] > a[j + 1])
			{
				tmp = a[j + 1];
				a[j + 1] = a[j];
				a[j] = tmp;
			}
			j++;
		}
		j = 0;
		i++;
	}
	printf("%d %d\n", a[0], a[n - 1]);
	return 0;
}
