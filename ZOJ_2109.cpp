#include<stdio.h>
#include<algorithm>
#include<iostream>
using namespace std;

struct room {
	double jav,mao,a;
}room[1000];

bool a1( struct room a, struct room b)
{
	return a.a>b.a;
}
int main()
{
	int n,m,i;
	freopen("debug\\ZOJ_2109.txt","r",stdin);
	while(cin>>m>>n && m!=-1 && n!=-1)
	{
		
		for( i=0;i<n;i++)
		{
			cin>>room[i].jav>>room[i].mao;
			room[i].a=room[i].jav/room[i].mao;
		}
		
		sort(room,room+n,a1);
		double sum=0;
	 	for(int j=0;j<n;j++)
	 	{ 
	 		
	 		if(m-room[j].mao>0 )
	 		{
		 		m-=room[j].mao;
		 		sum+=room[j].jav;
		 	}else  {
	 			sum+=room[j].a*m;
	 			break;
	 		}
	 		
	 		
	 	}
	 	printf("%0.3lf\n",sum);
	}
} 