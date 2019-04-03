#include<stdio.h>
#include<algorithm>
using namespace std; 
int main()
{
	freopen("debug\\ZOJ_2481.txt","r",stdin); 
	int n,i,t,j,flog;
	
	while(scanf("%d",&n),n!=0)
	{
		int a[100];
		flog=0;
		for(i=0;i<n;i++)
		{
			scanf("%d",&a[i]);
		}
		sort(a,a+n);
		printf("%d ",a[0]);
	
		for(i=1;i<n;i++)
		{
				if(a[i]!=a[i-1])
				{
					flog=1;
					printf("%d",a[i]);
				}
				if(flog && i<n-1){
					flog=0;
					printf("*"); 
				}
	
		}
		
		
			printf("\n");
		
	}
	
}