#include <stdio.h>

int		main(void)
{
	char name[31];
	int order;

	scanf("%s %d", name, &order);

	FILE *fp = stdout;

	fprintf(fp, "The %dth Satellite of Jupiter: %s", order, name);

	fclose(fp);

	return 0;
}
