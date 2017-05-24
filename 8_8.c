#include <stdio.h>

int main()
{
	char str[100], *p;
	int num, low, up, space, other;
	
	num = low = up = space = other = 0;
	printf("Input the string:");
	gets(str);
	p = str;
	while (*p != '\0')
	{
		if (*p >= '0' && *p <= '9')
			num++;
		else if (*p >= 'a' && *p <= 'z')
			low++;
		else if (*p >= 'A' && *p <= 'Z')
			up++;
		else if (*p == ' ')
			space ++;
		else other++;
		p++;
	}	
	printf("Number: %d\nLow case: %d\nUp case: %d\nSpace: %d\nOther: %d\n", num, low, up, space, other);
	
	return 0;
}
