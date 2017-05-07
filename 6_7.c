#include<stdio.h>
#define MAX 15

int main(void)
{
	int a[MAX][MAX] = {0}, i, j, k, p = 1, n;//初始化数组 
	
	while (p)
	{
		printf("输入N (1-15之间的奇数)：");
		scanf("%d", &n);
		if ((n != 0) && (n <= 15) && (n % 2 != 0))
			p = 0;
	}
	//建立魔方阵 
	j = n / 2 + 1;
	a[1][j] = 1;//输出从1开始 
	for (k = 2; k <= n * n; k++)
	{
		i--;
		j++;
		if ((i < 1) && (j > n))
		{
			i += 2;
			j--;
		}
		else
		{
			if (i < 1) i = n;
			if (j > n) j = 1;
		}
		if (a[i][j] == 0)
			a[i][j] = k;
		else
		{
			i += 2;
			j--;
			a[i][j] = k;
		}
	}
	//输出
	for (i = 1; i <= n; i++)
	{
		for (j = 1; j <= n; j++)
			printf("%4d", a[i][j]); 
		printf("\n");
	} 
	
	return 0;
}
