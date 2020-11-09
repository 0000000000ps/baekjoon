#include <stdio.h>
#include <math.h>

int		main(void)
{
	int n;
	int i = 0;
	int a[i];
	int count = 0;
	int j;

	scanf("%d", &n);
	if (n > 100)
		return 0;
	while (i < n)
	{
		scanf("%d", &a[i]); 
		i++;
	}
	i = 0;
	j = 2;
	while (i++ < n)
	{
		if (a[i] == 1 || a[i] > 1000)
			continue;
		if (a[i] == 2)
			count++;
		while (j <= (int)sqrt(a[i]) + 1)
		{
			if (0 == a[i] % j)
				break;
			j++;
		}
		if (j == (int)sqrt(a[i]) + 2)
			count++;
		j = 2;
	}
	printf("%d\n", count);
	return 0;
}
