#include<stdio.h>
int main(void){
	char c1 = 'C', c2 = 'h', c3 = 'i', c4 = 'n', c5 = 'a';
	c1 += 4;//变为c1后面四位的字符
	c2 += 4;
	c3 += 4;
	c4 += 4;
	c5 += 4;
	printf("%c%c%c%c%c\n", c1, c2, c3, c4, c5);
	return 0;
}