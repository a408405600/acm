#include<stdio.h>
#include <iostream> 
#include<algorithm>
using namespace std; 
struct master{
	int index;
	int money;
}master[100];

bool cmp(struct	master	a,struct master	b){
	return a.money>b.money;
}

int  main()
{
	freopen("debug\\ZOJ_3202.txt","r",stdin);
	int n,m;
	cin>>n;
	while(n--)
	{
		cin>>m;
		for(int i=0;i<m;i++)
		{
			cin>>master[i].money;
			master[i].index=i+1;
		}
		
		sort(master,master+m,cmp);
		cout<<master[0].index<<" "<<master[1].money<<endl;
		
		
	}
}