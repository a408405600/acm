#include<stdio.h>
int main()
{
	int i,n,r,sum=0;
	char a[200];
	freopen("debug\\hdu ACM 2031 进制转换.txt","r",stdin); //输入重定向，输入数据将从文件中读取 
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
 
 
