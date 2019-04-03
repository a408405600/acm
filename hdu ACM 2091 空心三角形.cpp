#include<stdio.h>
int main()
{
	int m=0,n,i,j,l;
	char c;
	freopen("debug\\hdu ACM 2091 空心三角形.txt","r",stdin); //输入重定向，输入数据将从文件中读取 
	while(scanf("%c",&c),c != '@')
	{
		m++;
		scanf("%d",&n);
		getchar();
		if(m>1 ){
				printf("\n");
			}
		for(i=0;i<n-1;i++)
		{
			
			for(j=0;j<(2*n-1)/2-i;j++)
			{
				printf(" ");
			}
			for(l=0;l<=2*i;l++)
			{
				if(l == 0 || l == 2*i)
				{
					printf("%c",c);
				}else{
					printf(" ");
				}
			}
			printf("\n");
		}
		for(i=0;i<2*n-1;i++)
		{
			printf("%c",c);
		}
		printf("\n");
	}
}
