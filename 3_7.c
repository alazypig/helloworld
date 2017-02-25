#include<stdio.h>
#define PI 3.1415
int main(void){
	double r = 1.5, h = 3.0;
	printf("圆周长：%.2f\n", 2 * PI * r);
	printf("圆面积：%.2f\n", PI * r * r);
	printf("圆球表面积：%.2f\n", 4 * PI * r * r);
	printf("圆球体积：%.2f\n", 4 / 3 * PI * r * r * r);
	printf("圆柱体积：%.2f\n", PI * r * r * h);
	return 0;
}