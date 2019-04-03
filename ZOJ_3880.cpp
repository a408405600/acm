#include<stdio.h>
#include <iostream> 
#include<algorithm>
using namespace std; 
int main()
{
	freopen("debug\\ZOJ_3880.txt","r",stdin);
	int n,m,k;
	cin>>n;
	while(n--)
	{
		cin>>m;
		int sum=0;
		for(int i=0;i<m;i++)
		{
			cin>>k;
			if(k>6000)
			{
				sum++;
			}
		}
		cout<<sum<<endl;
	}
} 