#include<stdio.h>
int main()
{
	char c[19];
	int n;
	scanf("%d",&n);
	while(n--)
	{
		getchar();
		scanf("%s",&c);
		printf("He/She is from ");
		if(c[0] == '3' && c[1] == '3'){
			printf("Zhejiang");
		}else if(c[0] == '1'){
			printf("Beijing");
		}else if(c[0] == '7'){
			printf("Taiwan");
		}else if(c[0] == '8' && c[1] == '1'){
			printf("Hong Kong");
		}else if(c[0] == '8' && c[1] == '2'){
			printf("Macao");
		}else if(c[0] == '5'){
			printf("Tibet");
		} else if(c[0] == '2'){
			printf("Liaoning");
		}else if (c[0] == '3' && c[1] == '1'){
			printf("Shanghai");
		}
		printf(",and his/her birthday is on ");
		printf("%c%c,%c%c,%c%c%c%c",c[10],c[11],c[12],c[13],c[6],c[7],c[8],c[9]);
		printf(" based on the table.\n");
	}
 } 
