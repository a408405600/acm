#include<stdio.h>
#define PI 3.1415927
//根据输入的半径值，计算球的体积。
int main()
{
	double v,r;
	while(scanf("%lf",&r)!=EOF)
	{	
		v=PI*r*r*r*4/3;
		printf("%.3lf\n",v);
	}
 } 
