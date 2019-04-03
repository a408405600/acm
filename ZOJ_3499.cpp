#include<stdio.h>
#include<algorithm>
using namespace std; 
int main()
{
	freopen("debug\\ZOJ_3499.txt","r",stdin); 
	int t,i,n;
	double a[500];
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d",&n);
		for(i=0;i<n;i++)
		{
			scanf("%lf",&a[i]);
		}
		sort(a,a+n);
		if(n%2 != 0 )
		{
			printf("%0.3lf\n",a[n/2]);
		}else{
			printf("%0.3lf\n",(a[n/2-1]+a[n/2])/2);
		}
		
	}
} 