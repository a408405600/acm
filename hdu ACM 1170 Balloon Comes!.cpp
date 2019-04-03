#include<stdio.h>
int main()
{
	int n,a,b;
	double d;
	char c;
//	while(scanf("%d",&n)!=EOF)
	scanf("%d",&n);
//	{
		while(n--)
		{
//			 getchar();
			scanf("%c",&c);
			scanf("%d %d",&a,&b);
			switch(c){
				case '+':d=a+b;
				break;
				case '-':d=a-b;
				break;
				case '/':d=1.0*a/b;
				break;
				case '*':d=a*b;
				break;
			}
			if(c == '/' && a % b)         //不整除,保留两位小数 
            printf("%.2lf\n", d);
        	else  
			 printf("%.lf\n", d);
    
		}
//	}
}
