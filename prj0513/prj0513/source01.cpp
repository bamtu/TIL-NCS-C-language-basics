#include <stdio.h>


float avg1(int num1, int num2)
{
	return ((num1+num2)/2.00);
}

int main()
{
	int a=0;
	int b=0;


	printf("정수 1: ");
	scanf("%d", &a);
	printf("정수 2: ");
	scanf("%d", &b);

	printf("평균 값 : %.2f\n", avg1(a,b));

	return 0;
}
