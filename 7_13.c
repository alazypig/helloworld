#include<stdio.h>

double telen(int,int);

int main(void){
	int n, x;
	
	printf("输入n和x的值：");
	scanf("%d%d", &n, &x);
	printf("P%d(%d) = %lf", n, x, telen(n, x));
	
	return 0;
}

double telen(int n, int x){
	if (n == 0)
		return 1;
	else if (n == 1)
		return x;
	else if (n >= 1)
		return ((2 * n - 1) * x - telen(n - 1 , x) - (n - 1) * telen(n - 2, x)) / n;
}
