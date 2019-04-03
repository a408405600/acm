#include<stdio.h>
#include<string.h>
int main ()
{
	int t,len,number;
	char ch[100];
	scanf("%d",&t);
	while(t--)
	{
//		scanf("%d%d%d",&a,&b,&c);
		scanf("%s %d",ch,number);
//		scanf("%d",number);
		len=strlen(ch);
		printf("%d  %d",len,number);
	}
}
