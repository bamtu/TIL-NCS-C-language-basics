#include <stdio.h>


void set_idx(int *v, int n)
{
	for(int i=0;i<n;i++)
	{
		printf("a[%d] = %d\n", i, v[i]);
	}	
}


int main()
{
	int arr[5];

	for(int i=0;i<5;i++)
	{
		int arr[i]=i;
	}

	set_idx(arr,5);
	return 0;

}