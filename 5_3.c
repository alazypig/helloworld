#include<stdio.h>

int MAX(int a, int b);//最大公约数
int MIN(int a, int b);//最小公倍数
int main() {
	int a, b;
	scanf("%d %d", &a, &b);
	printf("The max is %d, The min is %d", MAX(a, b), MIN(a, b));
	return 0;
}
int MAX(int a, int b) {
	int temp = 0;
	if (a < b) {
		temp = a;
		a = b;
		b = temp;
	}
	while (b != 0) {
		temp = a % b;
		a = b;
		b = temp;
	}
	return a;
}
int MIN(int a, int b) {
	int x;
	x = a * b / MAX(a, b);
	return x;
}