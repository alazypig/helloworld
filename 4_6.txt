#include<stdio.h>
int main(void) {
	int x;
	scanf("%d", &x);
	if (x < 1)
		printf("y = %d\n", x);
	else if (x < 10)
		printf("y = %d\n", 2 * x - 1);
	else printf("y = %d\n", 3 * x - 11);
	return 0;
}