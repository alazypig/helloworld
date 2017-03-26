#include<stdio.h>
#define LENGTH 15							//数组长度为15 

int main(void){
	int i, search, start, end, mid,array[LENGTH], find, loop = 1;
	char c;
	
	printf("输入从大到小排序的 15 个数：\n");
	scanf("%d", &array[0]);					//获取第一个数
	for (i = 1; i < LENGTH; i++){
		scanf("%d", &array[i]);
		if (array[i] < array[i - 1]){		//处理错误输入 
			printf("输入错误，请重新输入：");
			scanf("%d", &array[i]);	 
		}
	}
	
	printf("输入的数组为：");
	for (i = 0; i < LENGTH; i++)			//打印数组 
		printf(" %d", array[i]);
	printf("\n");
	
	while (loop){
		printf("请输入需要查找的数：");
		scanf("%d", &search);
		find = 0;							//0 代表未找到
		start = 0; end = LENGTH - 1;		//起始位置和终止位置 
		if (search < array[start] || search > array[end])
			find = 0;						//不在区间找不到
		while ((!find) && (start <= end)){	//二分法查找 
			mid = (start + end) / 2;
			if (search == array[mid]){
				printf("找到了 %d ，它在第 %d 个数。\n", search, mid + 1);	
				find = 1;
			}
			else if (search < array[mid])
				end = mid - 1;
			else start = mid + 1;
		}
		if (!find)
			printf("找不到这个数！\n");
		printf("是否继续查找其他数(Y/N)？");
		while(getchar() != '\n');			//清除回车 
		scanf("%c", &c);
		if (c == 'n' || c == 'N')
			loop = 0;
	}
	printf("Bye!\n");
	
	return 0;
}
