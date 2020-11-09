#include <stdio.h>

struct build {
	int x[50];
	int y[50];
	int rank[50];
	int index[50];
};

int		main(void)
{
	struct build s;
	int n;
	int i = 0;
	int j = 0;
	int tmp_x;
	int tmp_y;
	int tmp_index;
	int tmp_rank;
	int ranking = 1;
	int count = 1;

	scanf("%d", &n);
	if (n < 2 || n > 50)
		return 0;
	while (i < n)
	{
		scanf("%d %d", &s.x[i], &s.y[i]);
		s.index[i] = i;
		i++;
	}
	i = 0;
	while (i < n)
	{
		if ((s.x[i] < 10 || s.x[i] > 200) || (s.y[i] < 10 || s.y[i] > 200))
			return 0;
		i++;
	}
	i = 0;
	while (j < n - 1)
	{
		while (i < n - 1)
		{
			if ((s.x[i] <= s.x[i + 1] && s.y[i] <= s.y[i + 1]))
			{
				tmp_x = s.x[i];
				s.x[i] = s.x[i + 1];
				s.x[i + 1] = tmp_x;
				tmp_y = s.y[i];
				s.y[i] = s.y[i + 1];
				s.y[i + 1] = tmp_y;
				tmp_index = s.index[i];
				s.index[i] = s.index[i + 1];
				s.index[i + 1] = tmp_index;
			}
			i++;
		}
		i = 0;
		j++;
	}
	i = 0;
	s.rank[0] = 1;
	while (i < n)
	{
		if (s.x[i] >= s.x[i + 1] && s.y[i] >= s.y[i + 1])
		{
			ranking += count;
			s.rank[i + 1] = ranking;
		}
		else if ((s.x[i] >= s.x[i + 1] && s.y[i] <= s.y[i + 1])
				|| (s.x[i] <= s.x[i + 1] && s.y[i] >= s.y[i + 1]))
		{
				s.rank[i + 1] = ranking;
				count++;
		}
		i++;
	}
	i = 0;
	j = 0;
	while (j < n - 1)
	{
		while (i < n - 1)
		{
			if (s.index[i] > s.index[i + 1])
			{
				tmp_x = s.x[i];
				s.x[i] = s.x[i + 1];
				s.x[i + 1] = tmp_x;
				tmp_y = s.y[i];
				s.y[i] = s.y[i + 1];
				s.y[i + 1] = tmp_y;
				tmp_index = s.index[i];
				s.index[i] = s.index[i + 1];
				s.index[i + 1] = tmp_index;
				tmp_rank = s.rank[i];
				s.rank[i] = s.rank[i + 1];
				s.rank[i + 1] = tmp_rank;
			}
			i++;
		}
		i = 0;
		j++;
	}
	i = 0;
	while (i < n)
	{
		if (i == n - 1)
			printf("%d", s.rank[i]);
		else
			printf("%d ", s.rank[i]);
		i++;
	}
	return 0;
}
