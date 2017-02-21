#include<stdio.h>
int main(void) {
	int c1, c2;
	c1 = getchar();
	c2 = getchar();
	printf("%d %d\n", c1, c2);
	putchar(c1);
	putchar(' ');
	putchar(c2);
	putchar('\n');
	return 0;
}