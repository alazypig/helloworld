#include<stdio.h>
int main() {
	int n = 20, sum = 0, s = 1;
	for (int i = 1; i <= n; i++) {
		s *= i;
		sum += s;
	}
	printf("%d", sum);
	return 0;
}