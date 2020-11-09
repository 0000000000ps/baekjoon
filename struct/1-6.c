#include <stdio.h>

struct point
{
	int x;
	int y;
};

int		main(void)
{
	struct point p1 = {10, 20};
	struct point p2 = {0, 0};

	p2 = p2 + p1;
	
	printf("%d %d\n", p2.x, p2.y);
	return (0);
}
