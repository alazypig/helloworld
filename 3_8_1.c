#include<stdio.h>
int main(void) {
	char c1, c2;//int c1, c2 效果一样
	c1 = getchar();
	c2 = getchar();
	printf("%c %c\n", c1, c2);
	putchar(c1);
	putchar(' ');
	putchar(c2);
	putchar('\n');
	return 0;
}