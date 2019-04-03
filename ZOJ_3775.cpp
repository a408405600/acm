#include<stdio.h>  
#include<string.h>  
int main()  
{  
  freopen("debug\\ZOJ_3775.txt","r",stdin);
    int ul,em,t,i;  
    char a[1000],holl[100]="Hello, world!";  
    scanf("%d",&t);getchar();  
    while(t--)  
    {  
        gets(a);  
        ul=em=0;  
        int len=strlen(a);  
        for( i=0;i<len;i++)  
        if(a[i]=='_')  
            ul++;
        else if(a[i]=='!')  
            em++;  
        if(ul>1)  
        {  
            printf("No\n");
			continue;  
        }  
        if(ul==1&&em==0)  
        {  
            printf("Yes\n");
			continue;  
        }  
          char b[10000];  
          int slen=0;  
          while(em--)  
          {  
              for(i=0;i<13;i++)  
              b[slen++]=holl[i];  
          }  
          b[slen]='\0';  
          printf("%s\n",(strcmp(b,a))==0?"Yes":"No");  
    }  
}  
