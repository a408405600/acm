#include<stdio.h>
 int main()
 {
 	int n,flag,m,sum,i;
 	while(scanf("%d",&n)!=EOF)
 	{
 		if(n == 0)
		 {
		 	break;
		  } 
 		sum=0;
 		for(i=0;i<n;i++)
 		{
 			flag=1;
 			scanf("%d",&m);
 			while(flag)
 			{
 				if(m!=0)
 				{
		 			if(m>=100)
		 			{
		 				m=m-100;
		 				sum++;
					 }else if(m>=50){
					 	m=m-50;
					 	sum++;
					 }else if(m>=10){
					 	m=m-10;
					 	sum++;
					 }else if(m>=5){
					 	sum++;
					 	m=m-5;
					 }else if(m>=2){
					 	m=m-2;
					 	sum++;
					 }else if(m>=1){
					 	m=m-1;
					 	sum++;
					 }
				}else{
					flag = 0;
				}
			}
		 }printf("%d\n",sum); 
	 }
  } 
