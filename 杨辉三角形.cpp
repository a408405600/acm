#include<stdio.h>
void abc(int n);

int main()
{ 
	 int n;
	int i,j,a[17][17]={0,1};
   while(scanf("%d",&n))
   { 
		for(i=1;i<=n;i++)
   for(j=1;j<=i;j++)
     a[i][j]=a[i-1][j-1]+a[i-1][j];
   for(i=1;i<=n;i++)
   {
    for(j=1;j<=i;j++)
    printf("%d ",a[i][j]);
      printf("\n");
   }
		  printf("\n");
   }
 
}



