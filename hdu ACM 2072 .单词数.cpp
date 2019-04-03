#include<stdio.h>
#include<string.h>
int main()
{
	int len,c,d,i;
	char a[1000],b[10000][100];
	gets(a);
	len = strlen(a);
	c=0;
	d=0;
	for(i=0;i<len;i++)
	{
		b[c][d]=a[i];
		d++;
		if(a[i] == ' ')
		{
			c++;
			d=0;
		}
	}
	
	for(i=0;i<c;i++)
	{
		len=strlen(b[i]);
		for(j=i;j<len;j++){
			if(b[i][])
		}
	 } 
}
 
