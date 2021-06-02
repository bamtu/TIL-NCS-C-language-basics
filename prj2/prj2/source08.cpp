#include <stdio.h>

int main(){
	int num1, num2, num3 = 0;
	int result = 0;

	printf("number 1 : ");
	scanf("%d", &num1);

	printf("\nnumber 2 : ");
	scanf("%d", &num2);
	
	printf("\nnumber 3 : ");
	scanf("%d", &num3);

	result = (num1-num2)*(num2+num3)*(num3%num1);

	printf("\n RESULT is : %d \n", result);

	return 0;
}
