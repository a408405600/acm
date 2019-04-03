#include<stdio.h>
int main()
{
	double a,sum=0;
	int i;
	for(i=0;i<12;i++)
	{
		scanf("%lf",&a);
		sum+=a;
	}
	printf("$%.2lf\n",sum/12);
}
