#include <stdio.h>

int main()
{
	int stu[6][2] = {0};
	int sum1=0 ,sum2=0 ,sum3 = 0;
	for(int i=0;i<6;i++)
	{
		printf("\n%d번 학생의 국어성적 : ", i+1);
		scanf("%d", &stu[i][0]);
		printf("\n%d번 학생의 영어성적 : ", i+1);
		scanf("%d", &stu[i][1]);
	}
	printf("-----------------------");
	printf("\n번호	국어	영어	합계	평균");
	for(int i=0;i<6;i++)
	{
		printf("\n%d	%d	%d	%d	%f", i+1, stu[i][0], stu[i][1], stu[i][0]+stu[i][1], (float)(stu[i][0]+stu[i][1]/2));
		sum1 += stu[i][0];
		sum2 += stu[i][1];
		sum3 += sum1 + sum2;
	}
	printf("\n-----------------------");
	printf("\n합계	%d	%d	%d", sum1,sum2,sum3);
	printf("\n평균	%.2f	%.2f	%.2f", (float)sum1/6,(float)sum2/6,(float)sum3/6);
}