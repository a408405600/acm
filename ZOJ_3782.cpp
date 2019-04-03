#include<stdio.h>
#include <iostream> 
#include<algorithm>
#include<string.h>
using namespace std; 
int main()
{
	freopen("debug\\ZOJ_3782.txt","r",stdin);
	int c,d,e,n,sum;
	char a,b;
	cin>>n; 
	while(n--)
	{
		sum=0;
		scanf("%d %c %d %c %d",&c,&a,&d,&b,&e);
		if((a == '+' || a == '-') && (b == '/' || b == '*' || b == '%'))
		{
			switch (b)
			{
				case '/':sum=d/e;break;
				case '*':sum=d*e;break;
				case '%':sum=d%e;break;
			}
			switch (a)
			{
				case '+':sum+=c;break;
				case '-':sum=c-sum;break;
			}
		}else{
			switch (a)
			{
				case '/':sum=c/d;break;
				case '*':sum=c*d;break;
				case '%':sum=c%d;break;
				case '+':sum=c+d;break;
				case '-':sum=c-d;break;
			}
			
			switch (b)
			{
				case '/':sum=sum/e;break;
				case '*':sum=sum*e;break;
				case '%':sum=sum%e;break;
				case '+':sum+=e;break;
				case '-':sum-=e;break;
			}
		}
		cout<<sum<<endl;
	}
}