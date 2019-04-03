#include<stdio.h>
#include <iostream> 
#include<algorithm>
using namespace std; 
int main()
{
	int m,n;
	
		int t;
		int sum;
		cin>>m;
	while(m--)
	{
		cin>>n;
		sum=0;
		for(int i=0;i<n;i++)
		{
			cin>>t;
			sum+=t;
		}
		cout<<sum+n<<endl;
	}
}