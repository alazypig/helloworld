#include<stdio.h>
int main(void) {
	int x;
	scanf("%d", &x);
	(x % 3 == 0 && x % 5 == 0) ? printf("Ture") : printf("False");
	return 0;
}