#include <stdio.h>



int main()
{
	int n, m;
	scanf("%d %d", &n, &m);

	struct
	{
		char name[25];
		int win;
		int equa;
		int lose;
		int shot;
		int beshot;
		int scores;
		int goals;
	} cup[40], *p, temp;

	for(p=cup;p<cup+n;p++)
	{
		scanf("%s %d %d %d %d %d", p->name, &p->win, &p->equa, &p->lose, &p->shot, &p->beshot);
		p->scores = 3 * p->win + p->equa;
		p->goals = p->shot - p->beshot;
	}

	//for(p=cup;p<cup+n;p++)
	//	printf("%s %d %d %d %d %d %d\n", p->name, p->win, p->equa, p->lose, p->shot, p->beshot, p->scores);
	
	
	// sort
	int i, j;
	for(i=0;i<n;i++)
		for(j=1;j<n-i;j++)
			if(cup[j].scores>cup[j-1].scores)
			{
				temp = cup[j];
				cup[j] = cup[j-1];
				cup[j-1] = temp;
			}
			else if(cup[j].scores==cup[j-1].scores)
			{
				if(cup[j].goals>cup[j-1].goals)
				{
					temp = cup[j];
					cup[j] = cup[j-1];
					cup[j-1] = temp;
				}
			}
	

	for(p=cup;p<cup+m;p++)
		printf("%d %s %d %d\n", p-cup+1, p->name, p->scores, p->goals);
		
	system("pause");	                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                
    return 0;
}
