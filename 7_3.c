#include<stdio.h>

int isPrime(int);

int main(void){
	int n;
	
	printf("输入一个整数：");
	scanf("%d", &n);
	if (isPrime(n))
		printf("是素数");
	else printf("不是素数");
	
	return 0;
} 

int isPrime(int n){
	int isPrime = 1, i;
	for (i = 2; i <= n / 2; i++)
		if (n % i == 0){
			isPrime = 0;
			break;
		}
	return isPrime;
}
