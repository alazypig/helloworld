#include<stdio.h>
int main(void) {
	int year;
	scanf("%d", &year);
	(year % 4 == 0 && year % 100 != 0 || year % 400 == 0) ? printf("Is leap year.\n") : printf("Is not leap year.\n");//判断是否为闰年
	return 0;
}