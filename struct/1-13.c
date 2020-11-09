#include <stdio.h>

struct student
{
	char *no;
	char *name;
};

int		main(void)
{
	struct student stu;

	stu.no = "20101323";
	stu.name = "Park";
	printf("no: %s, name: %s\n", stu.no, stu.name);
	return 0;
}
