#include<stdio.h>
#include<string.h>
int main()
{
	char ch[100];
	char max[6]={'(','m','a','x',')'};
	int i,j,len,max2,num=0,k;
	while(scanf("%s",ch) != EOF)
	{
		max2=ch[0];
		len=strlen(ch);
		for(i=0;i<len;i++)
		{
			if(max2<ch[i])
			{
				max2=ch[i];
			}
		}
		for(i=0;i<len;i++)
		{
			printf("%c",ch[i]);
			if(ch[i] == max2)
			{
				printf("(max)");
			}
		}
		
	}
}
