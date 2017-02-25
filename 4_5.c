#include<stdio.h>
#include<math.h>
int main(void) {
	int x;
	scanf("%d", &x);
	while (x <= 0 || x > 1000) {//当x<=0或者x>1000时开始循环
		printf("Input again: ");
		scanf("%d", &x);
	}
	printf("%d\n", (int)sqrt(x));//通过sqrt函数获取平方根，并用(int)强制转为整型
	return 0;
}