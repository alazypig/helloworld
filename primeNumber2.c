#include<stdio.h>
#define maxNumber 25

int main(void)
{
	int isPrime[maxNumber];
	int i, x;
	
	for (i = 0; i < maxNumber; i++)
	{
		isPrime[i] = 1;		
	}
	for (x = 2; x < maxNumber; x++)
	{
		if (isPrime[x])
			for (i = 2; i * x < maxNumber; i++)
				isPrime[i * x] = 0;
	}
	for (i = 2; i < maxNumber; i++)
		if (isPrime[i])
			printf("%d\t", i);
	printf("\n");
	
	return 0;
}

