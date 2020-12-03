#include <stdio.h>

int		main(void)
{
	int t;
	int n;
	int i;
	int j;
	int num;
	int result;

	i = 0;
	j = 0;
	result = 0;
	scanf("%d", &t);
	while (i < t)
	{
		scanf("%d", &n);
		while (j < n)
		{
			scanf("%d", &num);
			result += num;
			j++;
		}
		printf("%d\n", result);
		result = 0;
		j = 0;
		i++;
	}
	return 0;
}
