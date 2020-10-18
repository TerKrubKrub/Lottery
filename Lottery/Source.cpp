#include <stdio.h>
int main()
{
	int x[50000],y[20];
	int m, n;
	int i, j, count=0;
	scanf_s("%d", &m);
	for (i = 1; i <= m; i++)
	{
		scanf_s("%d", &x[i]);
		x[i] = x[i] % 100000;
		x[i] = x[i] % 10000;
		x[i] = x[i] % 1000;
	}
	scanf_s("%d", &n);
	for (i = 1; i <= n; i++)
	{
		scanf_s("%d", &y[i]);
	}
	for (i = 1; i <= n; i++)
	{
		for (j = 1; j <= m; j++)
		{
			if (x[j] == y[i]) count++;
		}
	}
	printf("%d", count);
	return 0;
}