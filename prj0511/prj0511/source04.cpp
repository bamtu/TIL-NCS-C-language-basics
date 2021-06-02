#include <stdio.h>

int main(){
	int arr[5];
	int sum = 0;

	for(int i=0;i<5;i++)
	{
		arr[i] = i;
	}

	for(int i=0;i<5;i++)
	{
		printf("%d\n", arr[i]);
	}

	for(int i=0;i<5;i++)
	{
		sum += arr[i];
	}

	printf("%d\n", sum);
	return 0;
}