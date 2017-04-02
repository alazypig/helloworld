#include<stdio.h>

void putsNumber(char[]);

int main(void){
	char array[4];
	printf("请输入四位数：");
	gets(array);
	putsNumber(array);
	printf("\n");
	
	;return 0;
} 

void putsNumber(char array[]){
	int i;
	
	for (i = 0; i < 4; i++){
		printf("%c ", array[i]);
	}
}
