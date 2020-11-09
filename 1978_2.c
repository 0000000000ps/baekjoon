#include <stdio.h>

int		main(void)
{
	int n, num;
	int a[1000] = {0,};
	int i, j, cnt;

	cnt = 0;
	a[0] = 1;
	a[1] = 1;
	for (j = 2; j < 1000; j++)
		for(i = j * 2; i < 1000; i++)
			if(i % j == 0) a[i] = 1;
	scanf("%d", &n);
	i = 0;
	while (i++ < n)
	{
		scanf("%d", &num);
		if (a[num] == 0) cnt++;
	}
	printf("%d\n", cnt);
	return 0;
}
