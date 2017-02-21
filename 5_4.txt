#include<stdio.h>
int main() {
	char c;//用户输入的字符
	int letters = 0,//英文字母
		number = 0,//数字
		pause = 0,//空格
		others = 0;
	while ((c = getchar()) != '\n') {
		if (c >= 'A' && c <= 'Z' || c >= 'a' && c <= 'z') letters++;
		else if (c >= '0' && c <= '9') number++;
		else if (c == ' ') pause++;
		else others++;
	}
	printf("letters: %d\nnumber:%d\npause:%d\nothers:%d\n", letters, number, pause, others);
	return 0;
}