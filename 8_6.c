#include <stdio.h>

int length(char*);

int main()
{
	char str[100];
	
	printf("ÊäÈë×Ö·û´®£º");
	gets(str);
	printf("¸Ã×Ö·û´®³¤¶ÈÎª£º%d\n", length(str));
	
	return 0;
}

int length(char *str)
{
	int count = 0;
	
	while (*(str + count) != '\0') count++;
	
	return count;
}
