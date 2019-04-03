#include<stdio.h>
#include<string.h>
int main()
{
	char c[1001][16];
	
	int n,i,j,len,max;
//	freopen("debug\\hdu ACM 1004 Let the Balloon Rise.txt","r",stdin); //输入重定向，输入数据将从文件中读取
	while(scanf("%d",&n),n!=0)
	{
		int a[1001]={0}; 
		max=0;
//		getchar();
		for(i=0;i<n;i++)
		{
			scanf("%s",&c[i]);
		}
		
		for(i=0;i<n;i++){
			for(j=i+1;j<n;j++){
				if(strcmp(c[i],c[j]) == 0){
					a[i]++;
				}
			}
		}
		
		for(i=0;i<n;i++){
			if(a[i]>max)
			{
				max=i;
			}
		}
		
		 printf("%s\n",c[max]);
	}
 } 
