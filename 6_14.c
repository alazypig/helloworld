#include<stdio.h>
#define LENGTH 100

int main(void){
	int i = 0, n = 0;
	char a[LENGTH], b[LENGTH];
	
	printf("输入第一个字符串：\n");
	gets(a);
	printf("输入第二个字符串：\n");
	gets(b);
	while (a[i] == b[i] && a[i] != '\0') i++; //获取不相等的那个字符 
	if (a[i] == '\0' && b[i] == '\0')
		printf("相等\n");
	else printf("相差 %d\n", a[i] - b[i]);
	
	return 0;
} 
