#include <stdio.h>

struct student
{
	char no[10];
	char name[20];
	double total;
};

int		main(void)
{
	struct student stu = {"20101323", "Park", 140};
	struct student *p = NULL;
	struct student **pp = NULL;

	p = &stu;
	pp = &p;

	printf("%s %s %lf \n", stu.no, stu.name, stu.total);

	printf("%s %s %lf \n", (*p).no, (*p).name, (*p).total);
	printf("%s %s %lf \n", p->no, p->name, p->total);

	printf("%s %s %lf \n", (**pp).no, (**pp).name, (**pp).total);
	printf("%s %s %lf \n", (*pp)->no, (*pp)->name, (*pp)->total); 
	return 0;
}
