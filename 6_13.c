#include<stdio.h>
#define MAX_LENGTH 81

int main(void){
	char s1[MAX_LENGTH];
	char s2[MAX_LENGTH];
	int i = 0, j = 0;
	
	printf("输入第一个字符串：");
	scanf("%s", s1); 
	printf("输入第二个字符串：");
	scanf("%s", s2);
	while (s1[i] != '\0') i++;		//找到末尾
	while (s2[j] != '\0') s1[i++] = s2[j++];	//s1 末尾加上 s2
	s1[i] = '\0';			//加上末尾
	puts(s1); 
	
	return 0; 
} 
