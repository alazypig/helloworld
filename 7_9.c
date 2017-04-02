#include<stdio.h>
#include<string.h>

void getNumber(char[]);
int letters = 0,//英文字母
	number = 0,//数字
	pause = 0,//空格
	others = 0;

int main(void){
	char str[80];
	
	printf("输入字符串："); 
	gets(str);
	getNumber(str);
	printf("字母：%d 个\n数字：%d 个\n空格：%d 个\n其他：%d 个", letters, number, pause, others);
	
	return 0;
}

void getNumber(char str[]){
	int i;
	for (i = 0; i < strlen(str); i++){
		if (str[i] >= 'A' && str[i] <= 'Z' || str[i] >= 'a' && str[i] <= 'z') letters++;
		else if (str[i] >= '0' && str[i] <= '9') number++;
		else if (str[i] == ' ') pause++;
		else others++;
	}
}
