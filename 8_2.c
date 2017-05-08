#include<stdio.h>
#include<string.h>
#define MAX 1050

void swap(char*, char*);

int main(void)
{
	char str1[MAX], str2[MAX], str3[MAX];
	
	printf("ÊäÈëÈý¸ö×Ö·û´®£º\n");
	gets(str1); gets(str2); gets(str3);
	if (strcmp(str1, str2) > 0) swap(str1, str2);
	if (strcmp(str1, str3) > 0) swap(str1, str3);
	if (strcmp(str2, str3) > 0) swap(str2, str3);
	printf("ÅÅÐòºóÈý¸ö×Ö·û´®Îª£º\n");
	puts(str1); puts(str2); puts(str3);
	
	return 0;
}

void swap(char *str1, char *str2)
{
	char temp[MAX];
	
	strcpy(temp, str1);
	strcpy(str1, str2);
	strcpy(str2, temp);
}
