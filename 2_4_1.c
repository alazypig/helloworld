#incluce<stdio.h>
int main(void){
    int x = 2, y = 3, temp;
	temp = x;
	x = y;
	y = temp;
	printf("%d %d", x, y);
	return 0;
}