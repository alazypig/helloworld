#include<stdio.h>

double solut(double, double, double, double);

int main(void)
{
	double a, b, c, d;
	
	printf("ÊäÈëa, b, c, d:");
	scanf("%lf%lf%lf%lf", &a, &b, &c, &d);
	printf("x = %.8lf\n", solut(a, b, c, d)); 
	
	return 0;
}

double solut (double a, double b, double c, double d)
{
	double x = 1, x0, f, f1;
	do
	{
		x0 = x;
		f = ((a * x0 + b) * x0 + c) * x0 + d;
		f1 = (3 * a * x0 + 2 * b) * x0 + c;
		x = x0 - f / f1; 
	} while (fabs(x - x0) >= 1e-3);
	
	return x;
}
