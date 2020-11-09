#include <stdio.h>

int		main(void)
{
	int		i;
	int		j;
	int		count;
	char	chess[8][9];

	i = 0;
	j = 0;
	count = 0;
	while (i < 8)
	{
		while (j < 9)
		{
			scanf("%c", &chess[i][j]);
			j++;
		}
		j = 0;
		i++;
	}
	i = 0;
	j = 0;
	while (i < 8)
	{
		while (j < 9)
		{
			if ((i == 0 || i % 2 == 0) && (j == 0 || j % 2 == 0)
					&& chess[i][j] == 'F')
				count++;
			else if (i % 2 == 1 && j % 2 == 1 && chess[i][j] == 'F')
				count++;
			j++;
		}
		j = 0;
		i++;
	}
	printf("%d\n", count);
	return 0;
}
