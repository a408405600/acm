#include<stdio.h> 
#include<math.h> 
int main() 
{ 
	double i,x,y;
	double sum;
	double  a[4];
	while (scanf("%lf%lf%lf%lf", &a[0], &a[1],&a[2],&a[3]) != EOF)
	{
	 
	 x=abs(a[0]-a[2]);
	 y=abs(a[1]-a[3]);
	 sum=sqrt(x*x+y*y);
	 printf("%.2f",sum);
	}
	 
}

