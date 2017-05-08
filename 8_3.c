#include<stdio.h>

void input(int*);
void swap(int*);
void output(int*);

int main(void)
{
	int a[10];
	
	input(a);
	swap(a);
	output(a);
	
	return 0;
}

void input(int *p)
{
	int i;
	
	for (i = 0; i < 10; i++)
		scanf("%d", p + i);
}

void output(int *p)
{
	int i;
	
	for (i = 0; i < 10; i++)
		printf("%d ", *(p + i));
	printf("\n");
}

void swap(int *p)
{
	int *max, *min, *flag, temp;
	
	max = min = p;
	for (flag = p + 1; flag < p + 10; flag++)
		if (*min > *flag) min = flag;
	temp = *p; *p = *min; *min = temp;
	for (flag = p + 1; flag < p + 10; flag++)
		if (*max < *flag) max = flag;
	temp = *(p + 9); *(p + 9) = *max; *max = temp;
}
