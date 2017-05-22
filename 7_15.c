#include <stdio.h>
#define len 10

void input (int[], char[][8]);
void sort (int[], char[][8]);
void search (int, int[], char[][8]);

int main()
{
	int num[len], number, flag = 1, choose;
	char name[len][8];
	
	input(num, name);
	sort(num, name);
	while (flag)
	{
		printf("\nÊäÈëÐèÒª²éÕÒµÄÐòºÅ£º");
		scanf("%d", &number);
		getchar();	//´¦Àí»Ø³µ 
		search(number, num, name);
		printf("¼ÌÐøÂð£º(Y / N)");
		choose = getchar();
		if (choose == 'N' || choose == 'n')
			flag = 0;
	}
		
	return 0;
}

void input (int num[], char name[len][8])
{
	int i;
	
	for (i = 0; i < len; i++)
	{
		printf("ÊäÈëÐòºÅ£º");
		scanf("%d", &num[i]);
		getchar();
		printf("ÊäÈëÐÕÃû£º");
		gets(name[i]);
	}
}

void sort(int num[], char name[len][8])
{
	int i, j, min, temp1;
	char temp2[8];
	
	for (i = 0; i < len - 1; i++)	//Ñ¡ÔñÅÅÐò 
	{
		min = i;
		for (j = i; j < len; j++)
			if (num[min] > num[j]) min = j;
		temp1 = num[i];
		strcpy(temp2, name[i]);
		num[i] = num[min];
		strcpy(name[i], name[min]);
		num[min] = temp1;
		strcpy(name[min], temp2);
	}
	for (i = 0; i < len; i++)
		printf("No.%d%10s\n", num[i], name[i]);
}

void search(int n, int num[], char name[len][8])	//¶þ·Ö·¨²éÕÒ 
{
	int low = 0, high = len - 1, mid, flag = 1, fond = 0;
	
	if ((n < num[0]) || (n > num[len - 1]))
		fond = -1;
	while ((flag == 1) && (low <= high))
	{
		mid = (low + high) / 2;
		if (n == num[mid])
		{
			fond = mid;
			printf("%d: Ãû×ÖÊÇ£º%s.\n", n, name[mid]);
			flag = -1;	//Ìø³öÑ­»· 
		}
		else if (n < num[mid]) high = mid - 1;
		else if (n > num[mid]) low = mid + 1;
	}
	if (flag == 1 && fond == -1) printf("%dÕÒ²»µ½Õâ¸öÐòºÅ.\n", n);
}
