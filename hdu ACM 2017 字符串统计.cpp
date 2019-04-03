#include<stdio.h>

int main()
{
	int n,sum;
	char str;
	scanf("%d",&n);
	getchar();
	while(n--)
	{
		sum=0;
		while(scanf("%c",&str),str!='\n')
		{
			if('0'<str && str<'9') sum++;
		}
		printf("%d\n",sum);
	}	
 } 
