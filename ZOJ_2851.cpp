#include<stdio.h>
#include <iostream> 
#include<algorithm>
#include<string.h>
using namespace std; 
int main()
{
	freopen("debug\\ZOJ_2851.txt","r",stdin);
	char a[200000];
	int n,len,sum,sum2,k;
	cin>>n;
	getchar();
	while(n--)
	{
		k=0;
		sum2=0;
		while(gets(a),strcmp(a,"##")!=0)
		{
			sum=0;
			len=strlen(a);
			for(int i=0;i<len;i++)
			{
				
				if(a[i]=='\t')
				{
					sum+=4;
					sum2++;
					continue;
				}
				
				if(a[i]==' ')
				{
					sum++;
					continue;
				}
				sum=0;
			}
			k+=sum;
		}
		printf("%d tab(s) replaced\n%d trailing space(s) removed\n",sum2,k);
	}
}