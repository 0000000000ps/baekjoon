#include <stdio.h>

int		main(void)
{
	int i = 0;
	int num = 0;
	int Q1 = 0;
	int Q2 = 0;
	int Q3 = 0;
	int Q4 = 0;
	int AXIS = 0;
	int a, b;

	scanf("%d", &num);
	while (i < num)
	{
		scanf("%d %d", &a, &b);
		if ((a == 0 && b == 0) || a == 0 || b == 0)
			AXIS++;
		else if (a > 0 && b > 0)
			Q1++;
		else if (a < 0 && b > 0)
			Q2++;
		else if (a < 0 && b < 0)
			Q3++;
		else if (a > 0 && b < 0)
			Q4++;
		i++;
	}
	printf("Q1: %d\n", Q1);
	printf("Q2: %d\n", Q2);
	printf("Q3: %d\n", Q3);
	printf("Q4: %d\n", Q4);
	printf("AXIS: %d\n", AXIS);
	return 0;
}
