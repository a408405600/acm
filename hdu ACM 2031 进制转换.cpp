#include<stdio.h>
int main()
{
	int i,n,r,sum=0;
	char a[200];
	freopen("debug\\hdu ACM 2031 ����ת��.txt","r",stdin); //�����ض����������ݽ����ļ��ж�ȡ 
	while(scanf("%d %d",&n,&r)!=EOF)
	{
		
	
	while(n/r!=0)
	{
		n=n/r;
		a[sum]=n%r;
		sum++;
		
	}
	for(i=0;i<=sum;i++)
	{
		printf("%c",a[i]);
	}
	
	
	
printf("\n");	
}

	
}
 
 
