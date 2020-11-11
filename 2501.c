#include <stdio.h>

int		main(void)
{
	int n;
	int k; //애매하고 불필요한 할당
	int aliquot[50];
	int num;
	int i;

	i = 0;
	num = 1;
	scanf("%d %d", &n, &k);
	while (num <= n)
	{
		if (n % num == 0)
		{
			aliquot[i] = n / num;
			i++;
		}
		num++;
	}
	/*if (i - k < 0)
		puts("0");*/
	printf("%d\n", aliquot[i - k]);
	return 0;
}
