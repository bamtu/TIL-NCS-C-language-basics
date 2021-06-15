#include <stdio.h>

struct person
{
	int id;
	char name[10];
	double grade;
};

int main()
{
	double z;
	int num;
	
	struct person p[10]={0};
	struct person temp[1] = {0};

	for(int i=0;i<10;i++)
	{
		printf("학번 : ");
		scanf("%d",&p[i].id);
		printf("이름 : ");
		scanf("%s",&p[i].name);
		printf("학점 : ");
		scanf("%lf",&p[i].grade);		//double은 scanf할 때 %lf
	}
	z = p[0].grade;
	for(int i=0;i<9;i++)
	{
		if(z < p[i+1].grade)
			z = p[i+1].grade;
	}
	for(int i=0;i<10;i++)
	{
		if(p[i].grade == z)
			num = i;
	}

	printf("학번	      이름      학점\n");
	for(int i=0;i<10;i++)
	{
		printf("%4d	%10s	%.1f\n",p[i].id, p[i].name, p[i].grade);
	}
	printf("\n\n");
	printf("%4d	%10s	%.1f\n",p[num].id, p[num].name, p[num].grade);
	for(int j=0;j<10;j++)
	{
		for(int i=0;i<9;i++)
		{
			if(p[i].grade < p[i+1].grade)
			{	
				temp[0].id = p[i].id;
				for(int k=0;k<10;k++)
				{
					temp[0].name[k] = p[i].name[k];
				}
				temp[0].grade = p[i].grade;

				p[i].id = p[i+1].id; 
				for(int k=0;k<10;k++)
				{
					p[i].name[k] = p[i+1].name[k];
				}
				p[i].grade = p[i+1].grade;

				p[i+1].id = temp[0].id;
				for(int k=0;k<10;k++)
				{
					p[i+1].name[k] = temp[0].name[k];
				}
				p[i+1].grade = temp[0].grade;
			}
		}
	}
	for(int i=0;i<10;i++)
	{
		printf("%4d	%10s	%.1f\n",p[i].id, p[i].name, p[i].grade);
	}


	return 0;
}