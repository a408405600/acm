#include<stdio.h>
#include<string.h>
int main()
{
	int i,l,n,flag,sum;
	char c[51];
	scanf("%d",&n);
	while(n--)
	{
		sum=0;
//		flag=1;
		getchar();
		gets(c);
		l=strlen(c); 
		if(c[0]>='A' && c[0]<='Z' || c[0]>='a' && c[0]<='z' || c[0]=='_')
			{
				sum++;
			}
//		if(flag)
//		{
			for(i=1;i<l;i++)
			{
				 if(c[i]>='0'&&c[i]<='9'||c[i]>='A'&&c[i]<='Z'||c[i]>='a'&&c[i]<='z'||c[i]=='_')
				 {
				 	sum++;
				 	
				 }
			}
//		}
		if(sum == l){
			printf("yes");
		}else{
			printf("no");
		}
		if(n){
			printf("\n");
		}
	}
 } 
