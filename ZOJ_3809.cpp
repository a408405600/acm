#include<stdio.h>
int main()
{
	int m,sum,n,i;
//	freopen("debug\\ZOJ_3809.txt","r",stdin);
	scanf("%d",&m);
	while(m--)
	{
		sum=0;
		scanf("%d",&n);
		int a[n];
		for(i=0;i<n;i++)
		{
			scanf("%d",&a[i]);
		}
		for(i=1;i<n-1;i++)
		{
			if(a[i]>a[i-1] && a[i]>a[i+1])
			{
				sum++;
			}
		}
		printf("%d\n",sum);
	}
 } 
