#include<stdio.h>
int main()
{
//		freopen("debug\\ZOJ_3714.txt","r",stdin); //�����ض����������ݽ����ļ��ж�ȡ 

	int n,j,i,m;
	int k,max;
	int sum=0;
	scanf("%d",&m);
	int a[405];
	while(m--)
	{
		scanf("%d%d",&n,&k);
		
		for(i=1;i<=n;i++)
		{
			scanf("%d",&a[i]);
			a[n+i]=a[i];
		 } 
		 max=0;
		 for(i=1;i<=n;i++)
		 {
		 	sum=0; 
		 	  for(j=i;j<i+k;j++)
		 	  {
		 	  	sum+=a[j];
			   }
			   if(sum>max)
			   {
			   	max=sum;
			   }
		 }
		 
		 printf("%d\n",max);
	}
 } 
