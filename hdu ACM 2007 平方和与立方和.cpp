#include<stdio.h>
int main()
{
	int a,b,sum,sum2;
	while(scanf("%d %d",&a,&b)!=EOF)
	{
		sum=0;
		sum2=0;
		for(;a<=b;a++)
		{
			if(a%2 == 0)
			{
				sum+=a*a;
			}
			else 
			{
				sum2+=a*a*a;
			}
		}
		printf("%d %d",sum,sum2);
		if(a>b-1){
			printf("\n");
		} 
	}
 } 
