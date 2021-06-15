#include <stdio.h>


struct point
{
	int xpos;
	int ypos;
};

typedef struct point Point;

typedef struct person
{
	char name[20];
	char phoneNum[20];
	int age;
}Person;


int main()
{
	Point pos={10,20};
	Person man={"man","010-2925-2103",21};

	return 0;

}