#include<stdio.h>
int main(void){
	int a, max = 0;
    for (int i = 1; i < 10; i++){
	    scanf("%d", &a);
		if (a > max) max = a;
	}
	printf("The max number is %d", max);
	return 0;
}