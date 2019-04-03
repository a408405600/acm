#include<stdio.h>
#include<string.h>
int main()
{
	char c[256];
	int i,sum,l;
	while(gets(c),c[0]!='#')
	{
		sum=0;
		l=strlen(c);
		for(i=0;i<l;i++)
		{
			if(c[i]>='A' && c[i]<='Z')
			{
				sum=sum+(c[i]-64)*(i+1);
			}
		}
		printf("%d\n",sum);
	}
}
