#include<stdio.h>
int main ()
{
	int n,m,sum;
	char c;
	scanf("%d\n",&n);
	while(n--)
	{
		sum=0;
		scanf("%c %d",&c,&m);
		getchar();
		if('A'<=c && c<='Z'){
			sum=c-64+m;
		} else if('a'<=c && c<='z'){
			sum=('z'-c)-26+m;
		}
		
		printf("%d\n",sum);
		
	}

 } 
