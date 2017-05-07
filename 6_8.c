#include<stdio.h>
#define M 4
#define N 5 

int main(void)
{
	int i, j, k, a[M][N], max, point, flag;
	
	printf("输入你的数组：");
	for (i = 0; i < M; i++)
		for (j = 0; j < N; j++)
			scanf("%d", &a[i][j]);
	for (i = 0; i < M; i++)
	{
		max = a[i][0];
		point = 0;
		for (j = 0; j < N; j++)
			if (a[i][j] > max)
			{
				max = a[i][j];
				point = j;	
			}	
		flag = 1;
		for (k = 0; k < M; k++)
			if (max > a[k][point])
			{
				point = 0;
				continue;
			} 
		if (flag)
		{
			printf("鞍点为：a[%d][%d] = %d\n", i, point, max);
			break; 
		}
	}
	if (!flag)
		printf("鞍点不存在！\n"); 
	
	return 0;
} 
