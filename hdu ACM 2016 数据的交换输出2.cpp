#include<stdio.h>
int main ()
{
	int a[100],min,i,n,j,m;
	while(scanf("%d",&n)!=EOF)
	{
		if(n == 0)
		{
			break;
		 } else
		 {
		 	scanf("%d",a[0]);
			min=a[0];
			for(i=1;i<n;i++)
			{
				scanf("%d",&a[i]);
				if(min>a[i])
				{
					min=a[i];
					m=i;
				 }
			}
			j=a[m];
			a[m]=a[0];
			a[0]=j;
			for(i=0;i<n;i++)
			{
				printf("%d",a[i]);
				if(i<n){
					printf(" ");
				}else{
					printf("\n");
				}
			}
		 }
	}
		
	
}
