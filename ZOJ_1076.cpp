#include<stdio.h>
#include <iostream> 
#include<algorithm>
#include <string>
using namespace std;
struct dna{
	int fist;
	int last;
	int index;
}dna[50000];

bool cmp(struct dna a, struct dna b)
{
	return a.last<b.last;
}
int main()
{
	//freopen("debug\\ZOJ_1076.txt","r",stdin);
	int n;
	while(cin>>n,n!=0)
	{
		for(int i=0;i<n;i++)
		{
			cin>>dna[i].fist>>dna[i].last;
			dna[i].index=i+1;
		}
		
		sort(dna,dna+n,cmp);
		
		for(int i=1;i<n;i++)
		{
			if(dna[i-1].last < dna[i].fist)
			{
				cout<<dna[i-1].index<<" ";
			}
		}
		printf("\n");
	}
}