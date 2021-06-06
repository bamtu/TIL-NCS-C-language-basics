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
//	{315,"홍길동",2.4},
//	{316,"이순신",3.7},
//	{317,"세종대왕",4.4}
//	};
//	
//	z = max(max(p[0].grade, p[1].grade),max(p[1].grade, p[2].grade));
//	for(int i=0;i<3;i++)
//	{
//		if(p[i].grade == z)
//			num = i;
//	}
//
//	printf("학번	      이름      학점\n");	
//	printf("%4d	%10s	%.1f\n",p[num].id, p[num].name, p[num].grade);
//	
//
//	return 0;
//}