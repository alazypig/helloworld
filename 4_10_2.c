#include<stdio.h>
int main(void) {
	int i;
	double money;
	printf("请输入奖金：");
	scanf("%d", &i);
	int c = i / 100000;
	if (c > 10) c = 10;
	switch (c) {
	case 0:money = i * 0.1; break;
	case 1:money = 100000 * 0.1 + (i - 100000) * 0.075; break;
	case 2:
	case 3:money = 100000 * 0.1 + 100000 * 0.075 + (i - 200000) * 0.05; break;
	case 4:
	case 5:money = 100000 * 0.1 + 100000 * 0.075 + 200000 * 0.05 + (i - 400000) * 0.03; break;
	case 6:
	case 7:
	case 8:
	case 9:money = 100000 * 0.1 + 100000 * 0.075 + 200000 * 0.05 + 200000 * 0.03 + (i - 600000) * 0.015; break;
	case 10:money = 100000 * 0.1 + 100000 * 0.075 + 200000 * 0.05 + 200000 * 0.03 + 400000 * 0.015 + (i - 1000000) * 0.01; break;
	default:printf("The i is a wrong number!");
	}
	printf("利润是：%.2f", money);
	return 0;
}