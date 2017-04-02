#include<stdio.h>
#include<string.h>

void findVocabulary(char[]);
int low = 0, high = 0, maxlength = 0;

int main(void){
	int i;
	char str[80];
		
	printf("输入字符串：");
	gets(str);
	findVocabulary(str);
	printf("最长的单词为：");
	for (i = low; i <= high; i++){
		putchar(str[i]);
	}
	printf("\n");
	
	return 0;
} 

void findVocabulary(char str[]){	//查找最长的单词所在的位置 
	int i, length, low_temp, high_temp;
	
	for (i = 0; i < strlen(str); i++){
		length = 0;
		low_temp = i;
		while (str[i] != ' ' && str[i] != '\0'){
			length++;
			i++;
		}
		high_temp = i - 1;
		if (length > maxlength){
			maxlength = length;
			low = low_temp;
			high = high_temp;
		}
	}
}
