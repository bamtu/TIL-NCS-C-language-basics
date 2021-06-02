#include <stdio.h>

void hello()
{
	for(int i=0;i<100;i++)
	{
		printf("안녕하세요\n");
	}
	return;
}
 
float avg1(int x, int y)
{
	return (((float)x+(float)y)/2); //나누기 2.0해도 됨.   float avg= (x+y) / 2.0  
}

int main(){
	//hello();
	printf("%.2f",avg1(2,3));
}