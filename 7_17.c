#include <stdio.h>

void turn(int);

int main()
{
	int number;
	
	printf("请输入一个整数：");
	scanf("%d", &number);
	printf("结果：");
	if (number < 0)	//处理负数 
	{
		putchar('-');
		number = -number;
	}
	turn(number);
	printf("\n");
		
	return 0;
}

void turn(int number)
{
	int i;
	
	if ((i = number / 10) != 0)
		turn(i);
	putchar(number % 10 + '0');
}
