#include <stdio.h>

struct person
{
	int id;
	char name[10];
	double grade;
};

int main()
{
	struct person p[3]={
	{101,"ȫ�浿",3.7},
	{102,"�̼���",4.2},
	{103,"������",4.5}
	};
	struct person max = p[0];

	//printf("�й�	      �̸�      ����\n");
	for (int i=0;i<3;i++)
	{
		//printf("%4d	%10s	%.1f\n",p[i].id, p[i].name, p[i].grade);
		if(p[i].grade> max.grade)
		{
			max = p[i];
		}
	}
	printf("�й� : %d\n", max.id);
	printf("�̸� : %s\n", max.name);
	printf("�й� : %.1f\n", max.grade);

	return 0;
}