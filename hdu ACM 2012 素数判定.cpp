#include<stdio.h>
int main()
{
	int x,y,f,n,i,j,flag;

	while(scanf("%d %d",&x,&y)!=EOF)
	{
		if(x == 0 && y == 0)
		{
			break;
		}else{
			for(j=x;j<=y;j++)
			{ 
				flag = 1;
				f=j*j+j+41;
				for(i=2;i<f;i++)
				{
					if(f%i == 0)
					{
						flag = 0;
						break;
					}
				}
			if(flag==0){
				printf("Sorry\n");
				break;
				}	
			}
		if(flag){
				printf("OK\n");
			}
		}
	}
}
