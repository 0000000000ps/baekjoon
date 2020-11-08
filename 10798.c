#include <stdio.h>
#include <string.h>

char	*ft_scanf(char *s)
{
	char	*line;
	int		i = 0;

	line = s;
	while (i < 15 && line != '\n')
	{
		scanf("%c", line);
		rewind(stdin);
		line++;
		i++;
	}
	return(line);
}

int		main(void)
{
	char	line1[15] = { 0, };
	char	line2[15] = { 0, };
	char	line3[15] = { 0, };
	char	line4[15] = { 0, };
	char	line5[15] = { 0, };
	char	*a1;
	char	*a2;
	char	*a3;
	char	*a4;
	char	*a5;
	int		i = 0;
	int		num = 1;

	a1 = ft_scanf(line1);
	a2 = ft_scanf(line2);
	a3 = ft_scanf(line3);
	a4 = ft_scanf(line4);
	a5 = ft_scanf(line5);
	
	while (i < 15)
	{
		printf("line5[%d] = %d\n", i, line5[i]);
		i++;
	}
	return 0;
}
