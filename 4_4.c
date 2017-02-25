#include<stdio.h>
int main(void) {
	int max(int, int);//max函数声明
	int a, b, c;
	scanf("%d %d %d", &a, &b, &c);
	printf("The max number is : %d", max(a, max(b, c)));//通过函数嵌套获得最大值
	return 0;
}
//max函数开始
int max(int a, int b) {
	if (a < b)
		return b;
	else return a;
}