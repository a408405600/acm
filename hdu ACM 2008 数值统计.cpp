#include<stdio.h>
int main()
{
	int n,i;
	double b;	
	while(scanf("%d",&n)!=EOF && n!=0)
	{
		int l=0,f=0,z=0;
		for(i=0;i<n;i++)
		{
			scanf("%lf",&b);
			if(b == 0)
			{
				l++;
			}else if (b<0)
			{
				f++;
			}else if (b>0)
			{
				z++;
			}
		 }
		 printf("%d %d %d\n",f,l,z); 
	}
 } 
