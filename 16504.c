#include <stdio.h>

int		main(void)
{
	int i;
	int j;
	int n;
	long long sum, result, total;

	i = 0;
	result = 0;
	total = 0;
	scanf("%d", &n);
	if (n % 2 != 0)
		return 0;
	while (i < n)
	{
		j = 0;
		result = 0;
		while (j < n)
		{
			scanf("%lld", &sum); //늘 scanf에서 막, 초기화되는 거 같아서 total넣음
			result += sum;
			j++;
		}
		total += result;
		i++;
	}
	printf("%lld\n", total);
	return 0;
}
