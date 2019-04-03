#include<stdio.h>
#include <iostream> 
#include<algorithm>
#include<string.h>
#include<math.h>
using namespace std;

double xx(double n)
{
	double y;
	 y=8*n*n*n*n+7*n*n*n+2*n*n+3*n+6;
	return y;
}

double yy(double n)
{
	double x1=0,x2=100;
	double y1,y2;
	y1=xx(x1);
	y2=xx(x2);
	
	while(fabs(y1-y2)>1e-8)
	{
		double sum;
		sum=(x1+x2)/2;
		if(xx(sum)>=n)
		{
			x2=sum;
			y2=xx(x2);
		}else{
			x1=sum;
			y1=xx(x1);
		}
		return x1;
	}
}

int main()
{
	int  n;
	cin>>n;
	int max=xx(100);
	int min=xx(0);
	while(n--)
	{
		double q;
		cin>>q;
	    if(n<min || n>max)
		{
			cout<<"No solution!"<<endl;
		}else{
			double m;
			m=yy(q);
			printf("%0.4lf\n",m);
		}
	}
}