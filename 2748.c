#include <stdio.h>

int		main(void)
{
	int n;
	long long fibo[91];
	int i = 2;

	fibo[0] = 0;
	fibo[1] = 1;
	scanf("%d", &n);
	if (n == 1)
	{
		printf("%d\n", n);
		return (0);
	}
	if (n > 90 || n < 1)
		return (-1);
	while (i <= n && n <= 90 && n > 1)
	{
		fibo[i] = fibo[i - 1] + fibo[i - 2];
		fibo[n] = fibo[i];
		i++;
	}
	printf("%lld\n", fibo[n]);
	return 0;
}
