#include<stdio.h>
#include<string.h>
int main()
{
	char c[100];
	int i,sum,l,n;
	scanf("%d\n",&n);
	while(n--)
	{
		sum=1;
		gets(c);
		l=strlen(c);
		for(i=0;i<=l/2;i++)
		{
			if(c[i] != c[l-i-1])
			{
				sum=0;
			}
		}
		if(sum)
		{
			printf("yes\n");
		}else{
			printf("no\n");
		}
	}
}
