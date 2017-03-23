#include<stdio.h>

int main(void){
	int array[6] = {1, 3, 5, 7, 9};		//长度为 6 的数组存 5 个数
	int temp1, temp2;
	int number, i, j;
	
	printf("原来数组 : \n");
	for (i = 0; i < 5; i++)
		printf("%d	", array[i]);
	printf("\n");
	printf("请输入需要插入的数据：");
	scanf("%d", &number);
	if (number > array[4])
		array[5] = number;
	else
		for (i = 0; i < 4; i++)
			if (array[i] > number){		//如果数组中的数大于需要插入的数，则插入点后的数向后移动 
				temp1 = array[i];		//插入的数取代原来数的位置 
				array[i] = number;
				for (j = i + 1; j < 6; j++){	//插入点后的数向后移动 
					temp2 = array[j];
					array[j] = temp1;
					temp1 = temp2;
				}
				break;
			}
	printf("新数组：\n");
	for (i = 0; i < 6; i++)
		printf("%d	", array[i]);
	printf("\n");
	
	return 0;
} 
