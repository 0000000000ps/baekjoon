#include <stdio.h>
#include <string.h>

int		main(void)
{
	int		num;
	int		i;
	int		j;
	int		score;
	int		total;
	char	ox[80];

	i = 0;
	j = 0;
	score = 0;
	total = 0;
	scanf("%d", &num);
	while (i < num)
	{
		scanf("%s", ox);
		while (j < (int)strlen(ox))
		{
			if (ox[j] == 'O')
			{
				score++;
				total += score;
			}
			else if (ox[j] == 'X')
			{
				score = 0;
			}
			j++;
		}
		printf("%d\n", total);
		score = 0;
		total = 0;
		j = 0;
		i++;
	}
	return 0;
}
