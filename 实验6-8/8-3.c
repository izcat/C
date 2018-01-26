#include <stdio.h>

int mycmp(char *c1, char *c2)
{
	while(*c1&&*c2)
	{
		if(*c1!=*c2)
			return *c1 - *c2;
		else
			c1++, c2++;
	}
	if(*c1)
		return *c1;
	if(*c2)
		return *c2;
}

int main()
{
	char arr1[] = "China";
	char arr2[] = "Hello";
	char arr3[] = "World";
	
	if(mycmp(arr1, arr2)>0)
		printf("%s\n", arr1);
	else if(mycmp(arr1,arr2)<0)
		printf("%s\n", arr2);
	if(mycmp(arr2, arr3)>0)
		printf("%s\n", arr2);
	else if(mycmp(arr2,arr3)<0)
		printf("%s\n", arr3);
	if(mycmp(arr1, arr3)>0)
		printf("%s\n", arr1);
	else if(mycmp(arr1,arr3)<0)
		printf("%s\n", arr3);

	system("pause");
	return 0;
}
