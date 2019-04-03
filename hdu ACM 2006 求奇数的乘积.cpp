#include <stdio.h>
int main()
{   int n,i,k,s;
    while(scanf("%d",&n)!=EOF){
	s=1;
        for(i=0;i<n;i++)
	{
	    scanf("%d",&k);
            if(k%2!=0)
               s=s*k;
	}
	printf("%d\n",s);
    }
     return 0;
}
