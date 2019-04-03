#include<stdio.h>
int main()
{
	int i,n,m,b,sum=0;
	int a[100];
	while(scanf("%d %d",&n,&m) != EOF )
	{
		if(n==0 && m==0)
		{
			break;
		 } 
	
		for(i=0;i<n;i++)
		{
			scanf("%d",&b);
			a[i]=b;
			if(m>a[i])
			{
				sum++;
			}
		}
			
			for(i=n;i>sum;i--)
			{
				a[i]=a[i-1];
			}
			a[sum]=m;
			for(i=0;i<=n;i++)
			{
				printf("%d",a[i]);
				if(i!=n){
					printf(" ");
				}else{
					printf("\n");
				}
			}
			 
		
		
	}
 } 
