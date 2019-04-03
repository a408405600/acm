#include<stdio.h>
#include<string.h>
int main()
{
	char ch[101];
	int i;
	while(gets(ch)!=NULL)
	{
		ch[0]-='a'-'A';
		for(i=0;i<strlen(ch);i++)
		{
			if(ch[i-1] == ' ' && ch[i] != ' ')
			{
				ch[i]-='a'-'A';
			}
		}
		puts(ch);
	}
 } 
