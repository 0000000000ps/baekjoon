#include <stdio.h>

int		main(void)
{
	int i = 1;
	int T;
	int H[99];
	int W[99];
	int N[9801];
	int Y, X;

	scanf("%d", &T);
	while (i < T + 1)
	{
		scanf("%d %d %d", &H[i], &W[i], &N[i]);
		rewind(stdin);
		i++;
	}
	i = 1;
	while (i < T + 1 && N[i] <= H[i] * W[i])
	{
		if (N[i] % H[i] == 0)
			Y = H[i] * 100;
		else if (N[i] <= H[i])
			Y = N[i] * 100;
		else
			Y = N[i] % H[i] * 100;
		if (H[i] != N[i] && N[i] % H[i] == 0)
			X = N[i] / H[i];
		else if (N[i] % H[i] == 0)
			X = 1;
		else
			X = N[i] / H[i] + 1;
		printf("%d\n", Y + X);
		i++;
	}
	return 0;
}
