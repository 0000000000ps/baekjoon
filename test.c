#include <stdio.h>

int		main(void)
{
	char a[5] = { 0, };
/*	int b[5] = { 0, };*/
	int i = 0;

	while (i < 5)
	{
		scanf("%c", &a[i]);
		/*scanf("%d", &b[i]);*/
		rewind(stdin);
		i++;
	}
	i = 0;
	while (i < 5)
	{
		printf("%c\n", a[i]);
		/*printf("%d\n", b[i]);*/
		i++;
	}
	return 0;
}
