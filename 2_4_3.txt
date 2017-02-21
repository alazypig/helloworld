#include<stdio.h>
int main(void) {
	int a = 20, b = 2, c = 33, temp;
	if (a > b) {
		temp = a;
		a = b;
		b = temp;
	}	
	if (a > c) {		
		temp = a;
		a = c;
		c = temp;
	}
	if (b > c) {
		temp = b;
		b = c;
		c = temp;
	}
	printf("%d %d %d\n", a, b, c);
	return 0;
}