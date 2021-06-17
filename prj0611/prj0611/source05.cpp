#include <stdio.h>

struct student
{
	int num;
	char name[20];
	double score;
};

int main()
{
	struct student n[10] = {0};
	struct student max = n[0];

	FILE * fp = fopen("score.txt","rt");
	int ret;

	for(int i=0;i<10;i++)
	{
		ret=fscanf(fp, "%d %s %lf", &n[i].num, n[i].name, &n[i].score);
		if(n[i].score > max.score)
			max = n[i];

	}
	
	fp = fopen("result.txt","wt");
	fprintf(fp,"%d %s %.1f\n", max.num,max.name,max.score);

	fclose(fp);
}