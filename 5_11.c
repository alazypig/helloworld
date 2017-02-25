/*----------100米落下后总距离和最后高度-----------*/
#include<stdio.h>
int main(void) {
	double s = 100, h = s / 2;
	for (int i = 1; i < 10; i++) {//第一次弹起开始计算
		s += h * 2;
		h /= 2;
	}
	printf("s = %f\nh = %f", s, h);
	return 0;
}