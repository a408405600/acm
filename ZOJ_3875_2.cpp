#include<stdio.h>
#include <iostream> 
#include<algorithm>
using namespace std; 
struct food
{
	string name;
	int no;
}food[305];

bool cmp(struct food a,struct food b)
{
	return a.no < b.no;
}

int main()
{
	freopen("debug\\ZOJ_3875.txt","r",stdin);
	int n;
	int a[4];
	cin>>n;
	while(n--)
	{
		int sum=0;
		for(int i=0;i<3;i++)
		{
			cin>>a[i];
			sum+=a[i];
		}
		
		for(int i=0;i<sum;i++)
		{
			cin>>food[i].name;
			cin>>food[i].no;
		}
		
		sort(food,food+a[0],cmp);
		sort(food+a[0],food+a[0]+a[1],cmp);
		sort(food+a[0]+a[1],food+a[0]+a[1]+a[2],cmp);
		
		int sum2=0;
		int sum3=0;
		for(int i=0;i<3;i++)
		{
			sum2+=food[sum3+a[i]/2].no;
			sum3+=a[i];
		}
		
		cout<<sum2<<" "<<food[a[0]/2].name<<" "<<food[a[0]+a[1]/2].name<<" "<<food[a[0]+a[1]+a[2]/2].name<<endl;
	}
}