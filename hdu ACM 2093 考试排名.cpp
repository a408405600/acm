#include<stdio.h>
int main()
{
	int n,score,grade,i;
	char name[11];
	char subject[6];
	while(scanf("%d %d",&n,&score)!=EOF)
	{
		grade=0;
		scanf("%s",&name);
		for(i=0;i<n;i++)
		{
			scanf("%c",&subject);
			if(subjest>0)
			{
				grade += score*subject;
			}
		}
	}
}
 
