#include<stdio.h>
#include<math.h>

void greater(float, float);	//disc大于零时执行的函数 
void equal(float, float);	//disc等于零时执行的函数
void small(float, float);	//disc小于零时执行的函数
double a, b, c, disc, x1, x2, p, q;	//定义全局变量，通过函数修改值 

int main(void){
	
	printf("输入a，b，c：");
	scanf("%lf,%lf,%lf", &a, &b, &c);
	disc = b * b - 4 * a * c;
	printf("根为：");
	if (disc > 0){
		greater(a, b);
		printf("x1 = %lf, x2 = %lf\n", x1, x2);
	}
	else if (disc == 0){
		equal(a, b);
		printf("x1 = %lf, x2 = %lf", x1, x2);
	}
	else {
		small(a, b);
		printf("x1 = %lf + %lfi, x2 = %lf + %lfi\n", p, q, p, q);
	}
	
	return 0;	
}

void greater(float a, float b){
	x1 = (-b + sqrt(disc)) / (2 * a);
	x2 = (-b - sqrt(disc)) / (2 * a);
}

void equal(float a, float b){
	x1 = x2 = (-b)  / (2 * a);
}

void small(float a, float b){
	p = -b / (2 * a);
	q = sqrt(-disc) / (2 * a);
}
