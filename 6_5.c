#include<stdio.h>

int main(void){
	int array[5];
	int i, temp;
	
	printf("请输入五个整数：");
	for (i = 0; i < 5; i++)
		scanf("%d", &array[i]);
	printf("原数组为：\n");
	for (i = 0; i < 5; i++)
		printf("%d	", array[i]);
	printf("\n");
	for (i = 0; i < 5 / 2; i++){		//因为首尾互换，所以只需循环到数组长度的一半 
	 	temp = array[i];
	 	array[i] = array[5 - i - 1];
	 	array[5 - i - 1] = temp;
	 }
	printf("倒序后数组：\n");
	for (i = 0; i < 5; i++)
	 	printf("%d	", array[i]);
	printf("\n");
	
	return 0;
} 
