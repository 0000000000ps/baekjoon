#include <stdio.h>

int		main(void)
{
	int A;
	int B;
	int C;
	long long i = 0;

	scanf("%d %d %d", &A, &B, &C);
	if (B >= C)
	{
		printf("-1\n");
		return (0);
	}
	i = A / (C - B) + 1;
	printf("%lld\n", i);
	if (!(A + B * i < C * i))
		printf("-1\n");
	return 0;
}
