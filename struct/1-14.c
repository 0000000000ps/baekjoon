#include <stdio.h>
#include <string.h>

struct student
{
	char no[10];
	char name[20];
};

int		main(void)
{
	struct student stu;

	strcpy(stu.no, "20101323");
	strcpy(stu.name, "Park");

	printf("no: %s, name: %s\n", stu.no, stu.name);
	return 0;
}
