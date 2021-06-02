//#include <stdio.h>
//
//
//int min(int x, int y)
//{
//	return (x>y) ? y : x;
//}
//
//int min(int x, int y, int z)
//{
//	return min(x,y)>z ? z : min(x,y);
//}
//
//int main(){
//	int num1, num2, num3;
//
//	printf("정수를 두개 입력 \n정수 1 : ");
//	scanf("%d", &num1);
//	printf("\n정수 2 : ");
//	scanf("%d", &num2);
//	printf("\n정수 3 : ");
//	scanf("%d", &num3);
//
//	printf("작은 쪽의 값은 %d 입니다.\n", min(num1, num2, num3));
//	
//}