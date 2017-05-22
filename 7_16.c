#include <stdio.h>
#define len 5050

int xNumber(char[]);

int main()
{
	int i = 0, flag = 0;
	char choose;
	char num[len];
	
	printf("ÊäÈëÒ»¸öÊ®Áù½øÖÆÊý£º");
	while ((choose = getchar()) != '\0' && i < len)
	{
		if (choose >= '0' && choose <= '9' || choose >= 'A' && choose <= 'F' || choose >= 'a' && choose <= 'f')
		{
			flag = 1;
			num[i++] = choose;
		}		
		else if (flag)
		{
			num[i] = '\0';	//´¦Àí×Ö·û´®Ä©Î²
			printf("Õâ¸öÊýµÄÊ®½øÖÆÊýÎª£º%d\n", xNumber(num)); 
			printf("ÊÇ·ñ¼ÌÐø£º(Y / N)");
			choose = getchar();
			if (choose == 'n' || choose == 'N') break;
			else 
			{
				flag = 0;	
				i = 0;	//¹éÁã
				printf("\nÊäÈëÒ»¸öÊ®Áù½øÖÆÊý£º"); 
			}
		}
	}	
	
	return 0;
}

int xNumber(char num[])
{
	int i, dNumber = 0;
	
	for (i = 0; num[i] != '\0'; i++)
	{
		if (num[i] >= '0' && num[i] <= '9')
			dNumber = dNumber * 16 + num[i] - '0';	//Ã¿¶àÒ»Î» ÍùÇ°ÒÆ¶¯Ò»Î» 
		if (num[i] >= 'a' && num[i] <= 'f')
			dNumber = dNumber * 16 + num[i] - 'a' + 10;
		if (num[i] >= 'A' && num[i] <= 'F')
			dNumber = dNumber * 16 + num[i] - 'A' + 10;
	}
	
	return dNumber;
}
