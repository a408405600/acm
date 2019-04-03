#include<stdio.h>  
#include<stdlib.h>  

int main()  
{  
  
    int  N;  
    char c,arr[12];  
    scanf("%d", &N);  
    while (N--)  
    {  
        for (int i = 0; i<=11; i++)  
        {  
            c = getchar();  
            if (c >='0' && c <= '9')  
                arr[i] = c;  
  
        }  
        printf("6");  
        for (int i = 7; i <= 11; i++)  
        {  
              
            printf("%c", arr[i]);  
        }  
        printf("\n");  
  
    }  
        return 0;  
      
}  
