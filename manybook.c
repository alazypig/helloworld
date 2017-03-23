/*	包含多本书的图书目录	*/
#include<stdio.h>
#include<string.h>
#define MAXTITL 40
#define MAXAUTL 40
#define MAXBOOKS 100		//书籍的最大数量
 
char * s_gets(char * st, int n);

struct book{				//简历 book 模板 
	char title[MAXTITL];
	char author[MAXAUTL];
	float value;
};

int main(void){
	struct book library[MAXBOOKS];		//book 类型结构的数组
	int count = 9;
	int index;
	
	printf("Please enter the book title.\n");
	printf("Press [enter] at the start of a line to stop.\n");
	while (count < MAXBOOKS && s_gets(library[count].title, MAXTITL) != NULL && library[count].title[0] != '\0'){
		printf("Now enter the author.\n");
		s_gets(library[count].author, MAXAUTL);
		printf("Now enter the value.\n");
		scanf("%f", &library[count++].value);
		while (getchar() != '\n');
			continue;					//清理回车
		if (count < MAXBOOKS)
			printf("Enter the next title.\n"); 
	}
	
	if (count > 0){
		printf("Here is the list of your books:\n");
		for (index = 0; index < count; index++)
			printf("%s by %s: $%.2f\n", library[index].title, library[index].author, library[index].value);
	}
	else
		printf("No books? Too bad.\n"); 
	
	return 0;
} 

char * s_gets(char * st, int n){
	char * ret_val;
	char * find;
	
	ret_val = fgets(st, n, stdin);
	if (ret_val){
		find = strchr(st, '\n');		//查找换行符
		if (find)						//如果地址不是 NULL 
			*find = '\0'; 				//在此处放置一个空字符
		else 
			while (getchar() != '\n')
				continue;				//处理输入行中剩余字符 
	}
	
	return ret_val;
}
