#include <stdio.h>

struct student
{
	char no[10];
	char name[20];
	double total;
};

int		main(void)
{
	struct student stu[3];
	int i = 0;

	for(i = 0; i < 3; i++)
	{
		printf("please write no name total :");
		scanf("%s %s %lf", stu[i].no, stu[i].name, &stu[i].total);
	}
	printf("\n");

	printf("student information. \n");
	for(i = 0; i < 3; i++)
	{
		printf("%s %s %lf", stu[i].no, stu[i].name, stu[i].total);
		printf("\n");
	}
	return 0;
}
