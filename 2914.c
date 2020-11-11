#include <stdio.h>

int		main(void)
{
	int a;
	int i;
	int melody;

	scanf("%d %d", &a, &i);
	melody = a * (i - 1);
	printf("%d\n", melody + 1);

	return 0;
}
