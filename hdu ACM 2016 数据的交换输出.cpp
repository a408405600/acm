#include<stdio.h>
int main()
{
	int a[100];
	int n,flag,i,m,b,c,d;
	while(scanf("%d",&n)!=EOF && n!=0)
	{
		flag = 1;
		for(i=0;i<n;i++)
		{
			scanf("%d",&m);
			a[i]=m;
			if(flag)
			{
				b=a[0];
				flag = 0;
			}
			if(a[i]<b) 
			{
				b=a[i];
				c=i;
			}
		}
		d=a[c];
		a[c]=a[0];
		a[0]=d;
		for(i=0;i<n;i++)
		{
			printf("%d",a[i]);
			if(i<n-1){
					printf(" ");
				}else{
					printf("\n");
				}
		}
	}
 } 
