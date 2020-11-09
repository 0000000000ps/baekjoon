#include <stdio.h>

int		main(void)
{
	char s[16];

	scanf("%[^\n]s", s);
	printf("%s\n", s);
	return 0;
}
