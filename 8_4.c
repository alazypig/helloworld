#include <stdio.h>

int a[1000], b[1000];
int *move(int*, int, int);

int main()
{
	int *p, m, n, i;
	
	printf("ÊäÈëÊýµÄ¸öÊý£º");
	scanf("%d", &m);
	printf("ÇëÊäÈëÊý¾Ý£º");
	for (i = 0; i < m; i++)
	{
		scanf("%d", &a[i]);
	}
	printf("ÊäÈëÐèÒªÒÆ¶¯µÄÎ»Êý£º");
	scanf("%d", &n);
	p = move(a, m, n);
	printf("ÒÆ¶¯ºóµÄÊýÎª£º");
	for (i = 0; i < m; i++)
	{
		printf("%d ", *(p + i));
	}
	printf("\n");
	
	return 0;
}

int *move (int *a, int m, int n)
{
	int i = 0, k = 0;
	
	for (i = m - n; i < m; i++)
	{
		b[k++] = a[i]; 
	}
	for (i = 0; i < m - n; i++)
	{
		b[k++] = a[i];
	}
	
	return b;
}
