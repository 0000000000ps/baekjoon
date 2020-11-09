#include <stdio.h>

int		main(void)
{
	int		i;
	char	num_a;
	char	num_d;
	char	s[16];

	i = 0;
	num_a = '1';
	num_d = '8';
	while (i < 16)
	{
		scanf("%[^\n]c", &s[i]);
		i++;
	}
	if (!(s[0] == '1' || s[0] == '8'))
	{
		puts("mixed");
		return 0;
	}
	i = 0;
	while (i <= 14)
	{
		if (s[i] == num_a)
		{
			if (i == 14 && num_a == '8')
			{
				puts("ascending");
				return 0;
			}
			num_a++;
		}
		else
			break ;
		i += 2;
	}
	i = 0;
	while (i <= 14)
	{
		if (s[i] == num_d)
		{
			if (i == 14 && num_d == '1')
			{
				puts("descending");
				return 0;
			}
			num_d--;
		}
		else
			break ;
		i += 2;
	}
	puts("mixed");
	return 0;
}
