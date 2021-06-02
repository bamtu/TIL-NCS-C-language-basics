#include <stdio.h>

int main()
{
	double a[5] = {3.4, 5.8, 8.3, 2.6, 5.1};
	double *pa = &a[0];

	for(int i=0;i<5;i++)
	{
		printf("a[%d] = %.1f   \n",i, pa[i]);
		
	}


}
