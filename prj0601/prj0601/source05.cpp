#include <stdio.h>
#include <string.h>

int main()
{
	char str1[20] = "mango tree";
	char str2[6];

	strncpy(str2, str1, sizeof(str2)-1);
	str2[sizeof(str2)-1]=0;
	puts(str2);

	return 0;
}
