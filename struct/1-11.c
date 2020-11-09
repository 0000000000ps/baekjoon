#include <stdio.h>

struct student
{
	char no[10];
	char name[20];
	double math;
	double english;
	double total;
};

int		main(void)
{
	int i = 0;
	struct student stu[3] = {
		{"20101323", "Park", 80, 80, 0},
		{"20101324", "Kim", 30, 40, 0},
		{"20101325", "Lee", 100, 98.31, 0}
	};

	for (i = 0; i < 3; i++)
	{
		stu[i].total = stu[i].math + stu[i].english;
		printf("no : %s, name: %s\n", stu[i].no, stu[i].name);
		printf("total : %lf\n", stu[i].total);
		printf("\n");
	}
	return 0;
}
