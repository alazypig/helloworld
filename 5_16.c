#include<stdio.h>
int main(void) {
	for (int i = 1; i <= 4; i++) {//上四行
		for (int j = 1; j <= 4 - i; j++)
			printf(" ");//输出空格
		for (int k = 1; k < 2 * i; k++)
			printf("*");//输出星号
		printf("\n");//每行末尾换行
	}
	for (int i = 3; i > 0; i--) {//d倒序输出倒三角形
		for (int j = 1; j <= 4 - i; j++)
			printf(" ");
		for (int k = 1; k < 2 * i; k++)
			printf("*");
		printf("\n");
	}
	return 0;
}