#include<stdio.h>
int main()
{
	int gs[30]={1,1};
	int i,n; 
	while(scanf("%d",&n)!=EOF)
	{
		for(i=2;i<30;i++)  //��ʾ���� 
		{
			gs[i]=gs[i-1]*2+2;
		}
		printf("%d\n",gs[n]);
	}
}
