#include<stdio.h>
int main()
{
	int a[55]={0,1,2,3,4,6};
	int n,i,sum=2;
	while(scanf("%d",&n)!=EOF && n!=0)
	{
		for(i=6;i<sizeof(a)/sizeof(a[0]);i++)
		{
			a[i]=a[i-1]+sum;
			sum++;
		}
		printf("%d\n",a[n]); 
	}
}
