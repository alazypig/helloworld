#include<stdio.h>
int main() {
	int sum1 = 0, sum2 = 0;
	double sum3 = 0.0;
	for (int k = 1; k <= 100; k++) {
		sum1 += k;
	}
	for (int k = 1; k <= 50; k++) {
		sum2 += k * k;
	}
	for (int k = 1; k <= 10; k++) {
		sum3 += 1.0 / k;
	}
	printf("sum1 = %d\nsum2 = %d\nsum3 = %lf\n", sum1, sum2, sum3);
	return 0;
}