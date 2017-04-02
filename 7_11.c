#include<stdio.h>

void sort(char[]);

int main(void){
	char str[10];
	
	printf("输入十个字符：");
	gets(str);
	sort(str);
	printf("排序后的字符为：");
	puts(str); 
	
	return 0;
}

void sort(char str[]){
	int i, j;
	char temp;
	
	for (i = 1; i < 10; i++)
		for (j = 0; j < 10 - i; j++)
			if (str[j] > str[j + 1]){
				temp = str[j];
				str[j] = str[j + 1];
				str[j + 1] = temp;
			}
}
