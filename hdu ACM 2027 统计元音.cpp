#include<stdio.h>
#include<string.h>
int main()
{
	int n,i,j;
	int num1,num2,num3,num4,num5;
	
		scanf("%d",&n);
		char a[100];
		
		while(n--)
		{
			getchar(); 
			num1=0;num2=0;num3=0;num4=0;num5=0;
			gets(a);
//			scanf("%s",a[i]);
			for(j=0;j<strlen(a);j++)
			{
				switch(a[j])
				{
					case 'a': num1++;break;
					case 'e': num2++;break;
					case 'i': num3++;break;
					case 'o': num4++;break;
					case 'u': num5++;break;
				}
			}
			printf("a:%d\ne:%d\ni:%d\no:%d\nu:%d",num1,num2,num3,num4,num5);
			if(n){
				printf("\n\n");
			}else{
				printf("\n");
			}
			
		}
		
	
 } 
