#include<stdio.h>
int main()
{
	int i,n,num2,num=0,max,max2,flag,flag2;
	while(scanf("%d",&n) != EOF)
	{
		num2=0;
		flag=1;
		flag2=1;
		int a[n];
		for(i=0;i<n;i++)
		{
			scanf("%d",&a[i]);
		}
		max=a[0];
		for(i=0;i<n;i++)
		{
			if(max<a[i])
			{
				max=a[i];
			}
		}
		max2=max;
		for(i=1;i<n;i++)
		{
			if(a[0] == a[i])
			{
				num2++;
			}
		 }
		 if(num2 == n-1)
		 {
		 	flag=0;
		  } 
		  while(flag)
		  {
			while(n != num)
			{
				max+=max2;
				num=0;
				for(i=0;i<n;i++)
				{
					if(max%a[i] == 0)
					{
						num++;
					}
				}
				
			 }
			printf("%d\n",max);
//			flag=0;
//			flag2=0;
//			}
//			if(flag2)
//			{
//			printf("%d\n",a[1]);
//			}
	}
 } 
