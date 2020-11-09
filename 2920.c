#include <stdio.h>

int		main(void)
{
	int i;
	int num_a;
	int num_d;
	int num[15];
	char s[15];

	i = 0;
	num_a = 0;
	num_d = 15;
	scanf("%[^\n]s", s);
	while (i < 15)
	{
		num[i] = (int)s[i];
		i++;
	}
	while (--i > 0)
		printf("%d\n", num[i]);
	while (--i > 0)
	{
		if (num[i] != num_d)
			break;
		num_d -= 1;
	}
	if (num_d == 0)
	{
		printf("descending");
		return (0);
	}
	i = 0;
	while (i++ < 15)
	{
		if (num[i] != num_a)
			break;
		num_a += 1;
	}
	if (num_a == 15)
	{
		printf("ascending");
		return (0);
	}
	else
		printf("mixed");
	return 0;
}
