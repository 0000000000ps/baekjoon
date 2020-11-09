#include <stdio.h>

struct group
{
	int a;
	double b;
};

int		main(void)
{
	struct group g1;

	g1.a = 10;
	g1.b = 1.1234;

	printf("g1.a : %d\n", g1.a);
	printf("g1,b : %lf\n", g1.b);

	return (0);
}
