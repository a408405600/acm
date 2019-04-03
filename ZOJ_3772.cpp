#include<stdio.h>
#include <iostream> 
#include<algorithm>
#include<string.h>
using namespace std; 
int main()
{
	freopen("debug\\ZOJ_3772.txt","r",stdin);
	int t;
	int a,b;
	int n,m;
	cin>>t;
	while(t--)
	{
		int sum=0,sum1=0;
		cin>>n>>m;
		for(int i=0;i<n;i++)
		{
			cin>>a;
			sum+=a;
		}
		for(int i=0;i<m;i++)
		{
			cin>>b;
			sum1+=b;
		}
		
		if(sum>sum1)
		{
			cout<<"Calem"<<endl;
		}else if(sum<sum1){
			cout<<"Serena"<<endl;
		}else{
			cout<<"Draw"<<endl;
		}
	}
}