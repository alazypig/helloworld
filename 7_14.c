#include<stdio.h>

void get_score();	//获取学生数据 
void student_average();	//计算学生平均成绩 
void score_average();	//计算单科平均成绩 
double max_score();	//获得最大成绩 
double variance();	//计算方差 
double  score[10][5];	//十个学生，五门成绩 
double student_ave[10];	//学生平均成绩数组
double score_ave[5];	//单科平均成绩数组 
int subject, number;

int main(void){
	int i, j;
	double max;
	
	get_score();
	student_average();
	score_average();
	
	printf("\n学号  课程1  课程2  课程3  课程4  课程5  平均分\n");
	for (i = 0; i < 10; i++){
		printf("\n %d", i + 1);
		for (j = 0; j < 5; j++)
			printf("%8.2lf", score[i][j]);
		printf("%8.2f\n", student_ave[i]); 
	}
	printf("\n平均分为：");
	for (i = 0; i < 5; i++)
		printf("%8.2lf", score_ave[i]);
	printf("\n");
	max = max_score();
	printf("最高分为：%lf	学号为：%d	课程为：课程 %d\n", max, number, subject);
	printf("方差为：%lf\n", variance());
	
	return 0;
}

void get_score(){
	int i, j;
	
	for (i = 0; i < 10; i++){
		printf("输入第 %d 位学生的五门成绩：", i + 1);
		for (j = 0; j < 5; j++)
			scanf("%lf", &score[i][j]);
	}
}

void student_average(){
	int i, j;
	double sum;
	
	for (i = 0; i < 10; i++){
		sum = 0;	//成绩总和初始化 
		for (j = 0; j < 5; j++)
			sum += score[i][j];
		student_ave[i] = sum / 5.0;
	}
}

void score_average(){
	int i, j;
	double sum;
	
	for (i = 0; i < 5; i++){
		sum = 0;	//成绩总和初始化
		for (j = 0; j < 10; j++)
			sum += score[i][j];
		score_ave[i] = sum / 10.0; 
	}
} 

double max_score(){
	int i, j;
	double max = score[0][0];
	
	for (i = 0; i < 10; i++)
		for (j = 0; j < 5; j++)
			if (max < score[i][j]){
				max = score[i][j];
				number = i + 1; 
				subject = j + 1;
			}
	return max;
}

double variance(){
	int i;
	double sum_student_ave, sum_student_ave2;
	
	sum_student_ave = sum_student_ave2 = 0;
	for (i = 0; i < 10; i++){
		sum_student_ave2 += student_ave[i] * student_ave[i];
		sum_student_ave += student_ave[i];
	}
	return sum_student_ave2 / 10 - (sum_student_ave / 10) * (sum_student_ave / 10);
}
