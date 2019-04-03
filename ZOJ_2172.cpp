#include<stdio.h>
#include <iostream> 
#include<algorithm>
using namespace std; 
int main()
{
//	freopen("debug\\ZOJ_2172.txt","r",stdin);
	char c[100][100];
	int n;
	int sum=1;
	while(cin>>n,n!=0)
	{
		getchar();
		for(int i=0;i<n;i++)
		{
			gets(c[i]);
		}
		printf("SET %d\n",sum);
		sum++;
		
		for(int i=0;i<n;i+=2)
		{
			puts(c[i]);
		}
		 
		 if(n%2 == 0)
		 {
 			for(int i=n-1;i>=0;i-=2)
 			{
			 	puts(c[i]);
			 }
 		}else{
		 	for(int i=n-2;i>=0;i-=2)
 			{
			 	puts(c[i]);
			 }
		 }
	}
} 