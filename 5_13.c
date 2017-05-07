#include<stdio.h>
#include<math.h>

int main(void)
{
	double a, x0, x1;
	
	printf("输入a的值：");
	scanf("%lf", &a);
	x0 = a / 2;
	x1 = (x0 + a / x0) / 2;
	while (fabs(x0 - x1) >= 1e-5)
	{
		x0 = x1;
		x1 = (x0 + a / x0) / 2;
	}
	printf("%d的平方根为：%.5lf", a, x1);
	
	return 0;
}
