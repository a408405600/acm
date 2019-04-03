#include<stdio.h>
#include <iostream> 
#include<algorithm>
#include<string.h>
using namespace std;
struct stu{
	string name;
	string gro; 
	string sex;
	int n;
	int w;
	int nei[1000];
	int wai;
	double fs;
}stu[1000];

struct group{
	string name;
	int no;
}group[501];

bool cmp(struct stu a, struct stu b)
{
	if(a.fs == b.fs)
	{
		return strcmp(a.name , b.name)<0;
	}else{
		return a.fs > b.fs;
	}
	 
}

int ss(int x)
{
	//若为素数返回1，不是则返回0 
	int k;
	for (k=2;k<x;k++)
	if (x%k==0)
	return 0;
	return 1;
}

double MAX(double a,double b)
{
	return a>b?a:b;
}  
//bool cmp1(struct group a,struct group b)
//{
//	return a.no<b.no;
//} 
int main()
{
//	freopen("debug\\ZOJ_3705.txt","r",stdin);
	int t;
	cin>>t;
	while(t--)
	{
		int z,x;
		int n,m;
		int mms[1000];
		int osc[1000];
		cin>>n>>m;
		//题目信息录入 
		cin>>z;
		for(int i=0;i<z;i++)
		{
			cin>>mms[i];
		}
		cin>>x;
		for(int i=0;i<x;i++)
		{
			cin>>osc[i];
		}
		//组信息录入 
		int q;
		cin>>q;
		for(int i=0;i<q;i++)
		{
			cin>>group[i].name;
			cin>>group[i].no;
		}
		//组名次排序 
		// sort(group,group+q,cmp1);
		//录入学生信息 
		for(int i=0;i<n;i++)
		{
			cin>>stu[i].name;
			cin>>stu[i].gro;
			cin>>stu[i].sex;
			
			cin>>stu[i].n;
			cin>>stu[i].w;
			int f[1000]={
				0
			};
			for(int j=0;j<stu[i].n;j++)
			{
				cin>>stu[i].nei[j];
			}
			
			for(int j=0;j<stu[i].w;j++)
			{
				cin>>f[j];
			}
			sort(f,f+stu[i].w);
			if(stu[i].w >= 3)
			{
				stu[i].wai=f[2];
			}
		}
		//分数计算 
	 	for(int i=0;i<n;i++)
	 	{
	 		//组分数计算 
 			for(int j=0;j<q;j++)
 			{
			 	if(stu[i].gro == group[j].name)
			 	{
	 				if(group[j].no == 1)
	 				{
				 		stu[i].fs+=36;
				 	}else if(group[j].no == 2){
	 					stu[i].fs+=27;
	 				}else if(group[j].no == 3){
				 		stu[i].fs+=18;
				 	}
	 			}
		 	}
		 	
		 	//题目分数计算
		 	for(int j=0;j<stu[i].n;j++)//遍历学生做的题目 
		 	{
	 			for(int k=0;k<z;k++)//遍历mms题库 
	 			{
			 		if(stu[i].nei[j] == mms[k])
			 		{
			 			stu[i].fs+=2.5;
		 				stu[i].nei[j]=-1;
						 break; 
		 			} 
			 	}
		 	
			 	for(int k=0;k<x;k++)//遍历osc题库 
	 			{
			 		if(stu[i].nei[j] == osc[k])
			 		{
			 			stu[i].fs+=1.5;
		 				stu[i].nei[j]=-1;
						 break; 
		 			} 
			 	}	
			 	
				if(stu[i].nei[j] != -1) //查找不在mms,osc的题目
				{
					if(ss(stu[i].nei[j]))
					{
						stu[i].fs+=1;
						
					}else{
						stu[i].fs+=0.3;
						
					}
				}
		 	
	 		}
	 		//性别加分 
	 		if(stu[i].sex == "F")
			{
				stu[i].fs+=33;
		
			}
			 //外网比赛加分
			if(stu[i].w >= 3)
			{
				double pts=0;
				int flag;	
				pts+=MAX(0,((stu[i].wai-1200.0)/100)*1.5);
				stu[i].fs=stu[i].fs+pts;
			}
	
 		}
		sort(stu,stu+n,cmp);
		for(int i=0;i<m;i++)
		{
			cout<<stu[i].name;
			printf(" %.3f\n",stu[i].fs);
		}
	} 
}