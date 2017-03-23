#include<stdio.h>

int main(void){
	int array[10][10];
	int i, j;
	
	for (i = 0; i < 10; i++){
		array[i][0] = 1;		//最左边和每一行最末尾都为 1 
		array[i][i] = 1;
	}
	for (i = 2; i < 10; i++)		//从第三行第二个数开始处理 
		for (j = 1; j <=i - 1; j++)		//每行个数和行数相等 
			array[i][j] = array[i - 1][j - 1] + array[i - 1][j];
	for (i = 0; i < 10; i++){
		for (j = 0; j <= i; j++)
			printf("%d	", array[i][j]);
		printf("\n");
	}
	printf("\n");
	
	return 0;
}
