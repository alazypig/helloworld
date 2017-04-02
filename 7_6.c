#include<stdio.h>
#include<string.h>

void str_strcat(char[], char[]);

int main(void){
	char str1[80], str2[40];
	
	printf("输入第一个字符串：");
	gets(str1);
	printf("输入第二个字符串：");
	gets(str2);
	str_strcat(str1, str2);
	printf("连接后的字符串为：");
	puts(str1);
	
	return 0;
}

void str_strcat(char str1[], char str2[]){
	str1 = strcat(str1, str2);
}
