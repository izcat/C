#include <stdio.h>

typedef struct{
	char name[20];
	int num;
	float score;
} Student;

Student stu[10];

void Sort(Student stu[]);
float Getscore(int num);

int main()
{
	
	int i;
	for(i=0;i<10;i++)
		scanf("%s %d %f", stu[i].name, &stu[i].num, &stu[i].score);

	Sort(stu);

	for(i=0;i<10;i++)
		printf("Name:%10s No:%d Score:%.2f\n", stu[i].name, stu[i].num, stu[i].score);

	float ave = 0;
	for(i=0;i<10;i++)
		ave +=stu[i].score;
	ave /= 10;
	printf("The average score is %.2f\n", ave);

	float highest = -1;
	int pos = 0;
	for(i=0;i<10;i++)
	{
		if(highest<stu[i].score)
		{
			highest = stu[i].score;
			pos = i;
		}
	}
	printf("The highest is:\n");
	printf("Name:%10s No:%d Score:%.2f\n", stu[pos].name, stu[pos].num, stu[pos].score);
	
	
	system("pause");
	return 0;
}

void Sort(Student stu[])
{
	int i, j;
	for(i=0;i<10;i++)
		for(j=1;j<10-i;j++)
			if(stu[j].num<stu[j-1].num)
			{
				Student t = stu[j];
				stu[j] = stu[j-1];
				stu[j-1] = t;
			}
		
}

float Getscore(int num)
{
	int i;
	for(i=0;i<10;i++)
		if(num==stu[i].num)
			return stu[i].score;
}

