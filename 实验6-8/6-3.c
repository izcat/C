#include <stdio.h>

typedef struct{
	int num;
	float score;
} Student;

int main()
{
	Student stu[10];
	int i;
	for(i=0;i<10;i++)
		scanf("%d %f", &stu[i].num, &stu[i].score);

	int award[10] = {0};
	float ave = 0;
	for(i=0;i<10;i++)
		ave +=stu[i].score;
	ave /= 10;

	for(i=0;i<10;i++)
	{
		if(stu[i].score>1.1*ave)
			award[i] = 1;
		else if(stu[i].score>1.05*ave)
			award[i] = 2;
	}
		
	for(i=0;i<10;i++)
		if(award[i]==1)
			printf("NO.%d score:%.2f First Prize\n", stu[i].num, stu[i].score);
		else if(award[i]==2)
			printf("NO.%d score:%.2f First Prize\n", stu[i].num, stu[i].score);

	system("pause");
	return 0;
}
