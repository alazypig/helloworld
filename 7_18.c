#include <stdio.h>
#include <stdbool.h>

int total_day(int, int);
bool isLeap(int);

int main()
{
	int year, month, day, total;
	
	printf("ÇëÊäÈëÈÕÆÚ(eg: 2017 5 22)£º");
	scanf("%d%d%d", &year, &month, &day);
	total = total_day(month, day);
	if (isLeap(year) && month > 2)
		total++;
	printf("½ñÌìÊÇÕâÄêÖÐµÄµÚ%dÌì¡£\n", total);
	
	return 0;
} 

int total_day(int month, int day)
{
	int total = 0, i; 
	int month_arr[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
	
	for (i = 0; i < month - 1; i++)
		total += month_arr[i];
	total += day;
	
	return total;
}

bool isLeap(int year)
{
	if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0) return true;
	return false;
}
