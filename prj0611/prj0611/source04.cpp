//#include <stdio.h>
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
//	;
//
//	struct person p[10]={0};
//	struct person temp = {0};
//
//	FILE * fp1 = fopen("score.txt","rt");
//	int ret;
//
//	for(int i=0;i<10;i++)
//	{
//		ret=fscanf(fp1,"%d %s %lf",&p[i].id,p[i].name,&p[i].grade);
//		if(ret==EOF)
//			break;
//	}
//	fclose(fp1);
//	for(int j=0;j<10;j++)
//	{
//		for(int i=0;i<9;i++)
//		{
//			if(p[i].grade < p[i+1].grade)
//			{	
//				temp.id = p[i].id;
//				for(int k=0;k<10;k++)
//				{
//					temp.name[k] = p[i].name[k];
//				}
//				temp.grade = p[i].grade;
//
//				p[i].id = p[i+1].id; 
//				for(int k=0;k<10;k++)
//				{
//					p[i].name[k] = p[i+1].name[k];
//				}
//				p[i].grade = p[i+1].grade;
//
//				p[i+1].id = temp.id;
//				for(int k=0;k<10;k++)
//				{
//					p[i+1].name[k] = temp.name[k];
//				}
//				p[i+1].grade = temp.grade;
//			}
//		}
//	}
//	FILE * fp2 = fopen("result.txt","wt");
//	
//	for(int i=0;i<10;i++)
//	{
//		fprintf(fp2, "%2d %4d	%10s	%.1f\n",i+1,p[i].id, p[i].name, p[i].grade	);
//	}
//
//
//
//	return 0;
//
//}