#include<stdio.h>
#include<math.h>
int main() {
	double x, y;
	int high = 0;
	scanf("%lf %lf", &x, &y);
	if (x < 0) x *= -1;
	if (y < 0) y *= -1;
	if (sqrt((x - 2) * (x - 2) + (y - 2) * (y - 2)) <= 1)
		high = 10;
	printf("The high is %d", high);
	return 0;
}