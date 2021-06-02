#include <stdio.h>
#include <stdlib.h>

int main()
{
	int a;
	
	printf("학생 수 입력 : ");
	scanf("%d", &a);

	int *arr = (int *)malloc(sizeof(int) * a);

	int distri[11] = {0,};

	printf("%d명의 점수를 입력 : ",a);
	for(int i=0;i<a;i++)
		{
			printf("\n%d번 : ", i+1);
			scanf("%d", &arr[i]);
			if(arr[i] >=0 && arr[i] <= 10) distri[0]++;
			else if(arr[i]>=11&& arr[i]<=20) distri[1]++;
			else if(arr[i]>=21&& arr[i]<=30) distri[2]++;
			else if(arr[i]>=31&& arr[i]<=40) distri[3]++;
			else if(arr[i]>=41&& arr[i]<=50) distri[4]++;
			else if(arr[i]>=51&& arr[i]<=60) distri[5]++;
			else if(arr[i]>=61&& arr[i]<=70) distri[6]++;
			else if(arr[i]>=71&& arr[i]<=80) distri[7]++;
			else if(arr[i]>=81&& arr[i]<=90) distri[8]++;
			else if(arr[i]>=91&& arr[i]<=99) distri[9]++;
			else if(arr[i] == 100) distri[10]++;
		}
	for(int i=0;i<9;i++)
	{
		printf("분포 ~%d : %d \n",(i+1)*10, distri[i]);
	}
	printf("분포 ~%d : %d \n",99, distri[9]);
	printf("분포 ~%d : %d \n",100, distri[10]);
	
	free(arr);
	return 0;
}