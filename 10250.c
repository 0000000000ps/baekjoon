#include <stdio.h>

int		main(void)
{
	int i = 0;
	int T;
	int H, W, N;
	int Y, X, num;

	scanf("%d", &T);
	while (i < T)
	{
		scanf("%d %d %d", &H, &W, &N);
		rewind(stdin);
		i++;
	}
	Y = N % H * 100;
	X = N / H + 1;
	num = Y + X;
	printf("%d\n", num);
	return 0;
}
