#include <stdio.h>

int main(){
	int num1,num2;
	int max, min;
	int result = 0;

	printf("수 입력 : \n");
	scanf("%d", &num1);
	printf("수 입력 : \n");
	scanf("%d", &num2);

	if(num1 > num2)
	{
		max = num1;
		min = num2;
	}
	else if(num1 < num2)
	{	
		max = num2;
		min = num1;
	}
	else printf("Error");

	for(int i=max-1 ; i>min ; i--)
	{
		printf("%d\n",i);
		result += i;
		
	}
	printf("총 합은 %d\n", result);

}