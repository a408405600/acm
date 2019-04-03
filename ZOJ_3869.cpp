#include<stdio.h>
#include <iostream> 
#include<algorithm>
using namespace std; 
int main()
{
//	freopen("debug\\ZOJ_3869.txt","r",stdin);
	int n,m,k,flag,f;
	cin>>n;
	
	while(n--)
	{
		
		int a[1001]={
			0
		};
		
		cin>>m;
		for(int i=0;i<m;i++)
		{
			cin>>k;
			a[k]++;
		}
		f=a[1];
		flag=0;
		for(int i=1;i<=1000;i++)
		{
			if(a[i]>f)
			{
				f=a[i];
				flag=i;
			}
		}
		int flag1=1;
		for(int i=1;i<=1000;i++)
		{
			if(a[flag] == a[i] && i!=flag)
			{
				cout<<"Nobody"<<endl;
				flag1=0;
				break;	
			}
		}
		if(flag1)
		{
			cout<<flag<<endl;
		}
	}
} 