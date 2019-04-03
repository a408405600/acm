#include<stdio.h>
#include <iostream> 
#include<algorithm>
#include<string.h>
using namespace std;

int  main()
{
//	freopen("debug\\ZOJ_2001.txt","r",stdin);
	int sum,sum1,sum2,n;
	int len1,len2;
	char a[1000],b[1000];
	cin>>n;
	while(n--)
	{
		sum=0; sum2=0;
		cin>>a>>b;
		len1=strlen(a);
		len2=strlen(b);
		for(int i=len1-1; i>=0; i--)
		{
			sum=sum*10+a[i]-'0'; 
		}
		
		for(int i=len2-1; i>=0; i--)
		{
			sum2=sum2*10+b[i]-'0'; 
		}
		
		sum1=sum+sum2;
		int s=0;
        while (sum1)
         {
             s=sum1%10+s*10;
             sum1/=10;
         }
         printf ("%d\n",s);
     }
		
		
} 