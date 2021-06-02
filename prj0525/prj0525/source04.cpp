#include <stdio.h>

int main()
{
	int x[6][2] = {0};
	int sum[3] = {0};
	int cnt = 0;
	//scanning
	for(int i=0;i<6;i++)
		{	
			for(int j=0;j<2;j++)
			{
				if(cnt) 
				{
					printf("%d번 학생의 영어 점수에 점수입력 : ",i+1);
					cnt=0;
				}
				else
				{
					 printf("%d번 학생의 국어 점수에 점수입력 : ",i+1);
					 cnt++;
				}
				scanf("%d", &x[i][j]);
			}
		}

	for(int i=0;i<6;i++)
	{	if(cnt) 
		{
			printf("%d번 학생의 영어 점수 : ",i+1);
			cnt=0;
		}
		else
		{
			 printf("%d번 학생의 국어 점수 : ",i+1);
			 cnt++;
		}
		for(int j=0;j<2;j++)
		{
			printf("%d  ", x[i][j]);
			if(j==1) 
			{
				printf("\n");
			}
		}
	}
	printf("\n===============================================\n");
	printf("번호	국어	영어	합계	평균\n");
	for(int i=0;i<6;i++)
	{	
		printf("%d	%d	%d	%d	%.2f\n",i+1, x[i][0], x[i][1], x[i][0]+x[i][1], (x[i][0]+x[i][1])/2.00);
	}
	for(int i=0;i<6;i++)
	{
		sum[0] += x[i][0];
		sum[1] += x[0][i];
		sum[2] += x[i][0]+x[i][1];
	}
	printf("\n===============================================\n");
	printf("합계	%d	%d	%d\n",sum[0], sum[1], sum[2]);
	printf("평균	%.2f	%.2f		", sum[0]/6.00, sum[1]/6.00);
	
}