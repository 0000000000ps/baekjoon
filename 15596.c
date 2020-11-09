#include <stdio.h>

long long sum(int *a, int n)
{
	long long ans = 0;
	int i = 0;

	while (i < n)
	{
		ans += a[i];
		i++;
	}
	return ans;
}

int		main(void)
{
	int a[5] = {5, 5, 1, 6, 4};
	int n = 5;

	printf("%lld\n", sum(a, n));
	return 0;
}
