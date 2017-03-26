#include<stdio.h>
#define M "*****" 
int main(void){
	int row, i, j;
	
	printf("ÊäÈëÐÐÊý£º");
	scanf("%d", &row);
	for (i = 0; i < row; i++){
		for (j = 0; j < i; j++)
			printf(" ");
		puts(M);
	}
	
	return 0;
}
