#include<stdio.h>
#include <iostream> 
#include<algorithm>
using namespace std; 
struct stud{
	int index;
	int time;
}stu[20];
int time1(const struct stud &a , const struct stud &b)
{
	return  a.time < b.time;
}

 main()
{
	freopen("debug\\ZOJ_3787.txt","r",stdin);
	int t,n,sum;
	int i,s,f,m;
	cin>>t;
	int b[20000];
	
	while(t--)
	{
		int ztime;
		cin>>n>>sum;
		
		for(i=1;i<=n;i++)
		{
			scanf("%d:%d:%d",&s,&f,&m);
			stu[i].index = i;
			stu[i].time = m+f*60+s*3600;
		}
		sort(stu,stu+n,time1);
		//第一个人永远要刷卡 
		int j=1;
		printf("%d ",stu[1].time); 
		b[0]=stu[1].index;
		ztime = stu[1].time+sum;
		for(i=2;i<=n;i++)
		{
			//如果大于等于前一个人的时间+sum 
			printf("%d ",stu[i].time); 
			if(stu[i].time >= ztime)
			{
				//加时间
				ztime+=sum; 
				//记录 
				b[j]=stu[i].index;
				j++;
			} 
		} 
		sort(b,b+j);
		for(i=0;i<j;i++)
		{
			printf("%d ",b[i]);
		}
		printf("\n");
	}
} 