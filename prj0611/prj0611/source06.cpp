//#include <stdio.h>
//
//struct person
//{
//	char name[20];
//	char sex;
//	int age;
//};
//
//
//int main()
//{
//	struct person n[10] = {0};
//	struct person max = n[0];
//
//	FILE *fp = fopen("friend.txt","rt");
//	int ret;
//	for(int i=0;i<10;i++)
//	{
//		ret=fscanf(fp, "%s %c %d", n[i].name, &n[i].sex, &n[i].age);
//		if(n[i].age> max.age)
//		{
//			max = n[i];
//		}
//	}
//	printf("%s %c %d", max.name, max.sex, max.age);
//	fclose(fp);
//	return 0;
//}
