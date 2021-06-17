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
	{101,"홍길동",3.7},
	{102,"이순신",4.2},
	{103,"유관순",4.5}
	};
	struct person max = p[0];

	//printf("학번	      이름      학점\n");
	for (int i=0;i<3;i++)
	{
		//printf("%4d	%10s	%.1f\n",p[i].id, p[i].name, p[i].grade);
		if(p[i].grade> max.grade)
		{
			max = p[i];
		}
	}
	printf("학번 : %d\n", max.id);
	printf("이름 : %s\n", max.name);
	printf("학번 : %.1f\n", max.grade);

	return 0;
}