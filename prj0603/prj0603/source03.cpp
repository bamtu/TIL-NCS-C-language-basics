//#include <stdio.h>
//
//double max(double x, double y)
//{
//	return ((x>y)? x:y);
//}
//
//
//struct person
//{
//	int id;
//	char name[10];
//	double grade;
//};
//
//int main()
//{
//	double z;
//	int num;
//	struct person p[3]={
//	{315,"ȫ�浿",2.4},
//	{316,"�̼���",3.7},
//	{317,"�������",4.4}
//	};
//	
//	z = max(max(p[0].grade, p[1].grade),max(p[1].grade, p[2].grade));
//	for(int i=0;i<3;i++)
//	{
//		if(p[i].grade == z)
//			num = i;
//	}
//
//	printf("�й�	      �̸�      ����\n");	
//	printf("%4d	%10s	%.1f\n",p[num].id, p[num].name, p[num].grade);
//	
//
//	return 0;
//}