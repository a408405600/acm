#include<stdio.h>
#include<string.h>
int main()
{
	freopen("debug\\hdu ACM 1088.txt","r",stdin);
	char s[82];
	int flag=1;
	while(~scanf("%s",&s))
	{
		if(!strcmp("<br>",s)){
			flag=0;
			printf("\n");
		}else if(!strcmp(s,"<hr>")){
			if(flag){
				printf("--------------------------------------------------------------------------------\n");
			}else{
				printf("\n--------------------------------------------------------------------------------\n");
			}
			
		}
		sum
		
			printf("%s",s);
		
	}
}