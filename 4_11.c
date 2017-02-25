#include<stdio.h>
int main() {
	int a, b, c, d;//四个数从小到大输出
	scanf("%d %d %d %d", &a, &b, &c, &d);
	if (a <= b && a <= c && a <= d) {
		if (b <= c && b <= d)
			(c <= d) ? printf("%d %d %d %d", a, b, c, d) : printf("%d %d %d %d", a, b, d, c);
		else if (c <= b && c <= d)
			(b <= d) ? printf("%d %d %d %d", a, c, b, d) : printf("%d %d %d %d", a, c, d, b);
		else if (d <= c && d <= b)
			(c <= b) ? printf("%d %d %d %d", a, d, c, b) : printf("%d %d %d %d", a, d, b, c);
	}
	if (b <= a && b <= c && b <= d) {
		if (a <= c && a <= d)
			(c <= d) ? printf("%d %d %d %d", b, a, c, d) : printf("%d %d %d %d", b, a, d, c);
		else if (c <= a && c <= d)
			(a <= d) ? printf("%d %d %d %d", b, c, a, d) : printf("%d %d %d %d", b, c, d, a);
		else if (d <= c && d <= a)
			(c <= a) ? printf("%d %d %d %d", b, d, c, a) : printf("%d %d %d %d", b, d, a, c);
	}
	if (c <= a && c <= b && c <= d) {
		if (b <= a && b <= d)
			(a <= d) ? printf("%d %d %d %d", c, b, a, d) : printf("%d %d %d %d", c, b, d, a);
		else if (a <= b && a <= d)
			(b <= d) ? printf("%d %d %d %d", c, a, b, d) : printf("%d %d %d %d", c, a, d, b);
		else if (d <= a && d <= b)
			(a <= b) ? printf("%d %d %d %d", c, d, a, b) : printf("%d %d %d %d", c, d, b, a);
	}
	if (d <= a && d <= b && d <= c) {
		if (b <= c && b <= a)
			(c <= a) ? printf("%d %d %d %d", d, b, c, a) : printf("%d %d %d %d", d, b, a, c);
		else if (c <= b && c <= a)
			(b <= a) ? printf("%d %d %d %d", d, c, b, a) : printf("%d %d %d %d", d, c, a, b);
		else if (a <= c && a <= b)
			(c <= b) ? printf("%d %d %d %d", d, a, c, b) : printf("%d %d %d %d", d, a, b, c);
	}
	return 0;
}
