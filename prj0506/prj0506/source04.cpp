#include <stdio.h>

void hello()
{
	for(int i=0;i<100;i++)
	{
		printf("�ȳ��ϼ���\n");
	}
	return;
}
 
float avg1(int x, int y)
{
	return (((float)x+(float)y)/2); //������ 2.0�ص� ��.   float avg= (x+y) / 2.0  
}

int main(){
	//hello();
	printf("%.2f",avg1(2,3));
}