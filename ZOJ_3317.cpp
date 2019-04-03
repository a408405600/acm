#include<stdio.h>
#include <iostream> 
#include<algorithm>
using namespace std;
struct pp{
	int intime;
	int outime;
	int room;
	int index;
}pp[101];

bool inl(const struct pp &a , const struct	pp &b){
	return a.intime<b.intime;
}

bool dex(const struct pp &a , const struct	pp &b){
	return a.index<b.index;
}
int main()
{
	freopen("debug\\ZOJ_3317.txt","r",stdin);
	int n,m;
	while(cin>>n>>m,n!=0 && m!=0)
	{
		int a[100]={
			0
		};
		for(int i=1;i<=n;i++)
		{
			cin>>pp[i].intime>>pp[i].outime;
			pp[i].index=i;
		}
		sort(pp+1,pp+n,inl);
		int j=1,flog=1;
		for(int i=1;i<=n;i++)
		{
			for(int j=1;j<=m;j++)
			{
				if(pp[i].intime >= a[j]){
					pp[i].room=j;
					a[j]=pp[i].outime;
					flog=0;
				}
				if(flog){
					pp[i].room=0;
					flog=1;
				}
			}
		}
		sort(pp+1,pp+n,dex);
		for(int i=1; i<=n; i++)  
           printf("%d\n", pp[i].room);  
          
	}
	
} 