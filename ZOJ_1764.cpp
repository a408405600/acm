#include<stdio.h>
#include <iostream> 
#include<algorithm>
#include <string>
using namespace std;
struct team{
	string name;
	int tm1;
	int time1;
} team[120];

bool cmp (struct team a, struct team b)
{
	if(a.tm1 == b.tm1)
	{
		return a.time1<b.time1;
	}else{
		return a.tm1>b.tm1;
	}
}
int main()
{
//	freopen("debug\\ZOJ_1764.txt","r",stdin);
	int n,a,b;
	while(cin>>n)
	{
		int tmsum=0,fssum=0;
		for(int i=0;i<n;i++)
		{
			tmsum=0,fssum=0;
			cin>>team[i].name;
			for(int j=0;j<4;j++)
			{
				cin>>a>>b;
				if(b!=0)
				{
					tmsum++;
					fssum+=b;
					fssum+=(a-1)*20;
				}
				team[i].tm1=tmsum;
				team[i].time1=fssum;
			}
		}
			sort(team,team+n,cmp);
		
			cout<<team[0].name<<" "<<team[0].tm1<<" "<<team[0].time1<<endl;
		
		
	}
}