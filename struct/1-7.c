#include <stdio.h>

struct score
{
	double math;
	double english;
	double total;
};

struct student
{
	int no;
	struct score s;
};

int		main(void)
{
	struct student stu;

	stu.no = 20101323;
	stu.s.math = 90;
	stu.s.english = 80;
	stu.s.total = stu.s.math + stu.s.english;

	printf("no : %d\n", stu.no);
	printf("total : %lf\n", stu.s.total);
	return 0;
}
