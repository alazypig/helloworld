#include<stdio.h>
#include<math.h>
int main(void) {
	int sign = 1;//表示正负号
	int times = 0;//表示次数
	double pi = 0.0, n = 1.0, term = 1.0;
	while (fabs(term) >= 1e-6) {
		n += 2;
		sign = -sign;
		term = sign / n;
		times++;
	}
	printf("%d次\n", times);
	return 0;
}