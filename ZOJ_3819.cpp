#include<stdio.h>
int main()
{
//	freopen("debug\\ZOJ_3819.txt","r",stdin);
	int m,n,t,i,a,b,flog;
	scanf("%d",&t);
	while(t--)
	{
		int suma=0,sumb=0;
		scanf("%d%d",&n,&m);
		for(i=0;i<n-1;i++)
		{
			scanf("%d",&a);
			suma+=a;
		}
		
		for(i=0;i<m;i++)
		{
			scanf("%d",&b);
			sumb+=b;
		}
		
		if((double)suma/(n-1) == (int)suma/(n-1))
		{
			flog=(suma/(n-1))-1;
		}else{
			flog=(suma/(n-1));
		}
		
		printf("%d %d\n",sumb/m+1,flog);
	}
	
}
