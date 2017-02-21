#include <stdio.h>
int main()
{
	int is_prime(int);
	for (int n = 100; n < 200; n++)
		if (is_prime(n)) printf("%d,", n);
	return 0;
}
int is_prime(int n)//判断n是否为素数。
{
	for (int i = 2; i < n; i++)//按照数学规则，如果在2~n-1中存在因子，则不是素数。
		if (n%i == 0)return 0;
	return 1;
}