#include "stdio.h"
 int main()
  {  
  	//hdu ACM 2000
  	//输入三个字符后，按各字符的ASCII码从小到大的顺序输出这三个字符。
  	 char a[3],t;
     int i,j;
     while(scanf("%s",a)!=EOF)
     { 
		for(i=0;i<3;i++)
		{
	        for(j=i;j<3;j++)
			{
	          if(a[j]<a[i]){t=a[i];a[i]=a[j];a[j]=t;}
	       }
	    }
	       printf("%c %c %c\n",a[0],a[1],a[2]);
     
 	}
    return 0;
  }
