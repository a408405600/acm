#include<stdio.h>
#include <iostream>
#include<algorithm>
using namespace std;
int main()
{
	int a[100000];
	int index=0,m=3;
	int n;
	while(index<100000)
		{
			if(m%3==0 || m%5==0)
			{
				a[index++]=m;
			}
			m++;
		}
	while(cin>>n)
	{

		printf("%d\n",a[n-1]);
	}
} 