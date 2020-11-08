#include <stdio.h>

int		main(void)
{
	int i = 0;
	int T;
	int H[99];
	int W[99];
	int N[9801];
	int Y, X;

	scanf("%d", &T);
	while (i < T)
	{
		scanf("%d %d %d", &H[i], &W[i], &N[i]);
		rewind(stdin);
		i++;
	}
	i = 0;
	while (i < T && N[i] <= H[i] * W[i])
	{
		if (N[i] % H[i] == 0)
			Y = N[i] / H[i] * 100;
		else if (N[i] <= H[i])
			Y = N[i] * 100;
		else
			Y = N[i] % H[i] * 100;
		if (N[i] % H[i] == 0)
			X = H[i];
		else
			X = N[i] / H[i] + 1;
		printf("%d\n", Y + X);
		i++;
	}
	return 0;
}
