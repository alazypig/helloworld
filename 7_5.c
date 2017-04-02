#include<stdio.h>
#include<string.h>

void swap(char[]);

int main(void){
	char array[81];
	int i;
	
	printf("ÊäÈë×Ö·û´®£º");
	gets(array);
	swap(array);
	puts(array);
	
	return 0;
} 

void swap(char array[]){
	int i;
	char temp;
	
	for (i = 0; i < strlen(array) / 2; i++){
		temp = array[i];
		array[i] = array[strlen(array) - i - 1];
		array[strlen(array) - i - 1] = temp;
	}
}
