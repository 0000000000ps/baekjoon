#include <stdio.h>

/*int		fibonacci(int n)
{
	if(n == 0)
		return 0;
	else if (n == 1)
		return 1;
	else
		return fibonacci(n - 1) + fibonacci(n - 2);
}*/

int		main(void)
{
	int T;
	int N;
	int one = 1;
	int zero = 0;
	int tmp;
	int i = 0;
	int j = 0;

	scanf("%d", &T);
	while (i < T)
	{
		scanf("%d", &N);
		if (N == 0)
			printf("1 0\n");
		else if (N == 1)
			printf("0 1\n");
		else
		{
			while (j < N - 1)
			{
				tmp = one;
				one = one + zero;
				zero = tmp;
				j++;
			}
			printf("%d %d\n", zero, one);
			j = 0;
		}
		i++;
	}
	return 0;
}
