#include<stdio.h>
int main(void){
    int max(int, int);
	int x, y, z;
	scanf("%d %d %d", &x, &y, &z);
	printf("The max is %d", max(x, max(y, z)));
	return 0;
}
int max(int x, int y){
   if (x < y)
   return y;
   else return x;
}