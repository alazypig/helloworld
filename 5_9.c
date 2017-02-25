/*--------1000以内的完数----------*/
#include<stdio.h>
int main(void) {
	int s;
	for (int m = 2; m < 1000; m++) {
		s = 0;//s归零
		for (int i = 1; i < m; i++)
			if (m % i == 0) s += i;//s等于m的所有因数之和
		if (s == m) {
			printf("%d的因子是： ", m);
			for (int i = 1; i < m; i++)
				if (m % i == 0) printf("%d,", i);//输出因数
			printf("\n");
		}
	}
	return 0;
}