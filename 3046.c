#include <stdio.h>

int		main(void)
{
	int r, s;

	scanf("%d %d", &r, &s);
	r = s * 2 - r;
	printf("%d\n", r);
	return 0;
}
