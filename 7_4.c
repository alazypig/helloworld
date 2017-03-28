#include<stdio.h>
#define LENGTH 3

void swap(int[][LENGTH]);

int main(void){
	int array[LENGTH][LENGTH];
	int i, j;
	
	printf("输入 3 * 3 的数据：\n");
	for (i = 0; i < LENGTH; i++)
		for (j = 0; j < LENGTH; j++)
			scanf("%d", &array[i][j]);
	printf("输入的数组为：\n");
	for (i = 0; i < LENGTH; i++){
		for (j = 0; j < LENGTH; j++)
			printf("%d ", array[i][j]);
		printf("\n");
	}
	swap(array);
	printf("转换后的数组为：\n");
	for (i = 0; i < LENGTH; i++){
		for (j = 0; j < LENGTH; j++)
			printf("%d ", array[i][j]);
		printf("\n");
	}	
	return 0;
}

void swap(int array[][LENGTH]){
	int i, j, temp;
	for (i = 0; i < LENGTH; i++)
		for (j = i + 1; j < LENGTH; j++){
			temp = array[i][j];
			array[i][j] = array[j][i];
			array[j][i] = temp;
		}
}
