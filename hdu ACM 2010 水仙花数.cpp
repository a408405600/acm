#include<stdio.h>
int main()
{
	int m,n,flag,b,s,g;
	while(scanf("%d %d",&m,&n)!=EOF)
	{
		flag=1;
		for(;m<n;m++)
		{
			b=m/100;
			s=(m/10)%10;
			g=m%10;
			if(m == b*b*b+s*s*s+g*g*g)
			{
				printf("%d ",m);
				flag=0;
			}
		}
		
		if(flag){
			printf("no\n");
		}else{
			printf("\n");
		}
	}
}
