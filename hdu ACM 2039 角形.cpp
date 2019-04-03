#include <stdio.h>
int  main()
{
	int n,i,a,b,c;
	while(scanf("%d",&n)!=EOF)
	{
		for(i=0;i<n;i++)
		{
			scanf("%d %d %d",&a,&b,&c);
			if(a+b<=c || a+c<=b || b+c<=a)
			{
				printf("NO");
			}else{
				printf("YES");
			}
			if(n-1!=i)
			{
				printf("\n");
			}
		}
	}
 } 
