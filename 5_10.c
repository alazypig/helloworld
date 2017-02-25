#include<stdio.h>
int main(void) {
	double a = 1, b = 2, temp, sum = 0;
	for (int i = 1; i <= 20; i++) {
		sum += b / a;
		temp = b;
		b += a;
		a = temp;
	}
	printf("%f\n", sum);
	return 0;
}