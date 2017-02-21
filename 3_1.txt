#include<stdio.h>
#include<math.h>
int main(void){
	float p, r = 0.09;
	p = pow(1 + r, 10);
	printf("p = %f\n", p);
	return 0;
}