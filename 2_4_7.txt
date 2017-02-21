#include<stdio.h>
int main()
{
	int m, n, temp;
	scanf("%d%d", &m, &n);
	while (m%n != 0)//循环求最大公约数
	{
		temp = n;
		n = m%n;
		m = temp;
	}
	printf("%d\n", n); //打印出最大公约数
	return 0;
}