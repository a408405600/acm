#include<stdio.h>
#include <iostream> 
#include<algorithm>
#include<string.h>
using namespace std;

int main()
{
	freopen("debug\\ZOJ_3210.txt","r",stdin);
	int n,m;
	int a[100];
	int b[100];
 	cin>>n;
 	while(n--)
 	{
	 	cin>>m;
		for(int i=0;i<m;i++)
		{
			cin>>a[i];
		}
		
		for(int i=0;i<m;i++)
		{
			cin>>b[i];
		}	
		
		//flag  �ж�ͬһ���Ƿ�һ��  flag2  �ж�ͷβ�Ƿ�һ�� 
		int flog=1,flog2=1;
		for(int i=0;i<m;i++)
		{
			
			if(a[i] != b[i])
			{
				flog=0;	
			}
			if(a[i] != b[m-i-1])
			{
				
				flog2=0;
			}
			
			
		}
		
			if(flog && flog2)
			{
				cout<<"both"<<endl;
			}else if(flog)
			{
				cout<<"queue"<<endl;
			}else if(flog2)
			{
				cout<<"stack"<<endl;
			}else{
				cout<<"neither"<<endl;
			}
			
			
			
			
			
		
		
 	}
}