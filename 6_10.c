#include<stdio.h>
#define ROW 3
#define COL 80

int main(void){
	int i, j, upper_case, lower_case, space, integer, other;
	char array[ROW][COL];
	
	upper_case = lower_case = space = integer =  other = 0;			//初始化 
	for (i = 0; i < ROW; i++){
		printf("请输入第 %d 行的数据：\n", i + 1);
		gets(array[i]); 
		for (j = 0; j < 80 && array[i][j] != '\0'; j++)
			if (array[i][j] >= 'A' && array[i][j] <= 'Z')
				upper_case++;
			else if (array[i][j] >= 'a' && array[i][j] <= 'z')
				lower_case++;
			else if (array[i][j] >= '0' && array[i][j] <= '9')
				integer++;
			else if (array[i][j] == ' ')
				space++;
			else other++;
	}
	printf("\nUpper case : %d\n", upper_case);
	printf("Lower case : %d\n", lower_case);
	printf("Integer : %d\n", integer);
	printf("Space : %d\n", space);
	printf("Other : %d\n", other);
	
	return 0;
} 
