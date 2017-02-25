#include<stdio.h>
int main(void) {
	int sum;
	for (int i = 1; i <= 100; i++)
		sum += i;
	printf("sum = %d", sum);
	return 0;
}