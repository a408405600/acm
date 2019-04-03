#include<stdio.h>
#include<math.h>
int main()
{
	int i,m;
	double sum,n;
	while(scanf("%lf %d",&n,&m)!=EOF)
	{
		sum=0;
		for(i=0;i<m;i++)
		{
			sum+=n;
			n=sqrt(n);
			
		}
		printf("%.2lf\n",sum);
	}
 } 
