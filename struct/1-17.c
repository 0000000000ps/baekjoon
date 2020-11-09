#include <stdio.h>

struct point
{
	int x;
	int y;
};

int		main(void)
{
	struct point p1 = {20, 30};
	printf("address p1 : %x \n", &p1);
	printf("address p1.x : %x \n", &p1.x);
	return 0;
}
