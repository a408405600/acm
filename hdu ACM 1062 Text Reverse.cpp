#include<stdio.h>
#include<string.h> 
int main()
{
	int n,m,i,j,l;
	char g[1001];
	while(scanf("%d",&n)!=EOF)
	{
		getchar();
		while(n--)
		{
			m=0;
			gets(g);
			l=strlen(g);
			for(i=0;i<l;i++)
			{
				if(g[i] != ' ')
				{
					m++;
				}else{
					for(j=i-1;j>=i-m;j--)
					{
						printf("%c",g[j]) ;
					}
					m=0;
					printf(" ");
				}
			}
			for(i=l-1;i>0;i--)
			{
				if(g[i] != ' ')
				{
					printf("%c",g[i]);
				}else{
					break;
				}
			}
			printf("\n");
		}
	}
 } 
