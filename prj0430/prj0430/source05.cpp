#include <stdio.h>

int main(){
	int list[10];
	int min = 0;
	int max = 0;
	printf("�� 10�� �Է�: ");

	for(int i=0;i<10;i++)
	{
		scanf("%d", &list[i]);
	}
	min = list[0];
	for(int i=0;i<10;i++)
	{
		if(max < list[i])
		{
			max = list[i];
		}
	}
	for(int i=0;i<10;i++)
	{
		if(min > list[i])
		{
			min = list[i];
		}
	}
	printf("�ּҰ��� %d, �ִ밪�� %d\n", min, max);

	return 0;
}