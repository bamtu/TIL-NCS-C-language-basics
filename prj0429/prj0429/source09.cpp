#include <stdio.h>


int main(){
	int dan=0, num=1;
	printf("¸î ´Ü? ");
	scanf("%d", &dan);

	while(num<200)
	{
		printf("%d X %d = %d \n", dan,num, dan*num);
		num++;
	}
	return 0;
}