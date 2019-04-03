#include<stdio.h>
#include <iostream>
#include<algorithm>
using namespace std;
int main()
{
	//freopen("debug\\ZOJ_2857.txt","r",stdin);
	int n,m;
	int r[100][100];
	int g[100][100];
	int b[100][100];
	int sum=0;
	while(cin>>n>>m,n!=0 && m!=0)
	{
		int i,j;
		for(i=0;i<n;i++)
		{
			for(j=0;j<m;j++)
			{
				cin>>r[i][j];
			}
		}
		
		for(i=0;i<n;i++)
		{
			for(j=0;j<m;j++)
			{
				cin>>g[i][j];
			}
		}
		
		for(i=0;i<n;i++)
		{
			for(j=0;j<m;j++)
			{
				cin>>b[i][j];
			}
		}
		sum++;
		printf("Case %d:\n",sum);
		
		for(i=0;i<n;i++)
		{
			for(j=0;j<m-1;j++)
			{
				cout<<(r[i][j]+g[i][j]+b[i][j])/3<<",";
			}
			cout<<(r[i][m-1]+g[i][m-1]+b[i][m-1])/3<<endl;
		}
	} 
} 