#include <stdio.h>

int		main(void)
{
	int i = 0;
	int x[i];
	int y[i];
	/*int x_4th = 0;
	int y_4th = 0;*/

	while (i++ < 3)
		scanf("%d %d", &x[i], &y[i]);
	i = 0;
	printf("%d %d\n", x[0], y[0]);
	printf("%d %d\n", x[1], y[1]);
	printf("%d %d\n", x[2], y[2]);
	/*if (i == 0)
	{
		if (x[i] == x[i + 1])
			x_4th = x[i + 2];
		else if(x[i + 1] == x[i + 2])
			x_4th = x[i];
		else if(x[i] == x[i + 2])
			x_4th = x[i + 1];
	}
	if (i == 0)
	{
		if (y[i] == y[i + 1])
			y_4th = y[i + 2];
		else if (y[i + 1] == y[i + 2])
			y_4th = y[i];
		else if (y[i] == y[i + 2])
			y_4th = y[i + 1];
	}
	printf("%d %d\n", x_4th, y_4th);*/
	return (0);
}
