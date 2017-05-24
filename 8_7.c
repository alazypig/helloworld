#include <stdio.h>

char copy(char*, char*, int);

int main()
{
	char str1[100], str2[100];
	int n;
	
	printf("ÊäÈë×Ö·û´®£º");
	gets(str1);
	printf("ÊäÈë¿ªÊ¼Î»ÖÃ£º");
	scanf("%d", &n);
	copy(str1, str2, n);
	printf("¸´ÖÆºóµÄÊý×éÎª£º%s", str2);		
	
	return 0;
}

char copy(char *str1, char *str2, int n)
{
	int i = 0;
	
	while (i < n - 1)
	{
		i++;
		str1++;	//Ö¸µ½Ö¸¶¨Î»ÖÃ 
	}
	while (*str1 != '\0')
	{
		*str2++ = *str1++;
	}
	*str2 = '\0';
	
	return str2;
}
