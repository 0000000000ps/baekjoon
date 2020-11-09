#include <stdio.h>

struct student
{
	char no[10];
	char name[20];
	double total;
};

int		main(void)
{
	struct student stu = {"20101323", "Park", 160};
	struct student *p = NULL;

	p = &stu;
	printf("%s %s %lf \n", stu.no, stu.name, stu.total);
	printf("%s %s %lf \n", (*p).no, (*p).name, (*p).total);
	printf("%s %s %lf \n", p->no, p->name, p->total);
	return 0;
}
