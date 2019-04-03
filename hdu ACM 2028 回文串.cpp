#include<stdio.h>
#include<string.h>
int main()
{
	int n,j,i,flag;
	while(scanf("%d",&n)!=EOF);
	{
		char a[n][100];
		for(i=0;i<n;i++)
		{
			scanf("%s",&a[i]);
		}
		for(i=0;i<n/2;i++)
		{
			flag=0;
			for(i=0;i<strlen(a[i]);i++)
			{
				for(j=strlen(a[i]);j>0;j--)
				{
					if(a[i]!=a[j])
					{
						flag=1;
					 } 
				}
			}
			if(flag)
			{
				printf("no");
			}else
			{
				printf("yue");
			}
		}
	}
}
