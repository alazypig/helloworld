#include<stdio.h>

int max(int a, int b);	//最大公约数函数 
int min (int a, int b, int max){return a * b / max;}	//最小公倍数函数 

int main(void){
	int a, b, maxNumber, minNumber;
	
	printf("输入两个整数：");
	scanf("%d %d", &a, &b);
	maxNumber = max(a, b);
	minNumber = min(a, b, maxNumber);
	printf("最大公约数：%d\n", maxNumber);
	printf("最小公倍数：%d\n", minNumber);
	
	return 0;
}

int max(int a, int b){	//辗转相除法 
	int c = a % b;
	while (c != 0){
		a = b;
		b = c;
		c = a % b;
	}
	
	return b;	
}
