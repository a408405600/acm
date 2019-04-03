#include<stdio.h>
#include<math.h>
int main()
{
	int a[100];
	int n,i,j,jh;
	while(scanf("%d",&n)!=EOF)
	{
		if(n == 0)
		{
			break;
		}
		for(i=0;i<n;i++)
		{
			scanf("%d",&a[i]);
		}
		for(i=0;i<n;i++)
		{
			for(j=i;j<n;j++)
			{
				if(abs(a[i])<abs(a[j]))
				{
					jh=a[j];
					a[j]=a[i];
					a[i]=jh;
				}
			}
		}
		for(i=0;i<n;i++)
		{
			printf("%d",a[i]);
			if(i<n-1){
				printf(" ");
			}else{
				printf("\n");
			}
		}
	} 
 } 
