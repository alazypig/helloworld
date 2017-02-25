#include<stdio.h>
int main(void) {
	int sum = 0, x = 1;
	for (int i = 1; i <= 9; i++) {
		sum = (x + 1) * 2;
		x = sum;
	}
	printf("sum = %d\n", sum);
	return 0;
}