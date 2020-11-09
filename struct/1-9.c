#include <stdio.h>

typedef struct score
{
	double math;
	double english;
	double average;
} SCORE;

struct student
{
	int no;
	struct score s;
};

typedef struct student STUDENT;
int		main(void)
{
	STUDENT stu = {20101323, {90, 80.5, 0}};

	stu.s.average = (stu.s.math + stu.s.english) / 2;
	printf("no : %d\n", stu.no);
	printf("average : %lf\n", stu.s.average);

	return 0;
}
