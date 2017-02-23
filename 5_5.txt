#include<stdio.h>
int main(void) {
	int n, sum = 0;
	int p = 2;
	scanf("%d", &n);//get the number of p
	for (int i = 1; i <= n; i++) {
		sum += p;
		p = p * 10 + 2;//p = 2,22,222...
	}
	printf("%d\n", sum);
	return 0;
}