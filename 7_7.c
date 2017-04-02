#include<stdio.h>

void find(char[], char[]);

int main(void){
	char str1[80], str2[80];
	
	printf("输入字符串：");
	gets(str1);
	find(str1, str2);
	printf("字符串中的元音字母为：");
	puts(str2);
	
	return 0;
} 

void find(char str1[], char str2[]){
	int i, j;
	for (i = 0, j = 0; i < 80; i++)
		if (str1[i] == 'a' || str1[i] == 'e' ||str1[i] == 'i' ||str1[i] == 'o' ||str1[i] == 'u' ||str1[i] == 'A' ||str1[i] == 'E' ||str1[i] == 'I' ||str1[i] == 'O' ||str1[i] == 'U') {
			str2[j] = str1[i];
			j++;
		}
}
