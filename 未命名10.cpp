#include<stdio.h>  
#include<string.h>  
#include<algorithm>  
using namespace std;  
int map[10][10];  
struct node  
{  
    int x,y;  
}num[10000];  
int main()  
{  
    int t;  
    scanf("%d",&t);  
    while(t--)  
    {  
        int i,j,k;  
        for(i=1;i<=5;i++)  
        {  
            for(j=1;j<=5;j++)  
            {  
                scanf("%d",&map[i][j]);  
            }  
        }  
        //ok  
        if(map[1][1]==1)  
        {  
            num[1].x=2;  
            num[1].y=map[1][3];  
        }  
        if(map[1][1]==2)  
        {  
            num[1].x=2;  
            num[1].y=map[1][3];  
        }  
        if(map[1][1]==3)  
        {  
            num[1].x=3;  
            num[1].y=map[1][4];  
        }  
        if(map[1][1]==4)  
        {  
            num[1].x=4;  
            num[1].y=map[1][5];  
        }  
        //  
        if(map[2][1]==1)  
        {  
            for(k=2;k<=5;k++)  
            {  
                if(map[2][k]==4)  
                {  
                    num[2].x=k-1;  
                    break;  
                }  
            }  
            num[2].y=4;  
        }  
        if(map[2][1]==2||map[2][1]==4)  
        {  
            num[2].x=num[1].x;  
            num[2].y=map[2][num[2].x+1];  
        }  
        if(map[2][1]==3)  
        {  
            num[2].x=1;  
            num[2].y=map[2][2];  
        }  
        //  
        if(map[3][1]==1)  
        {  
            for(k=2;k<=5;k++)  
            {  
                if(map[3][k]==num[2].y)  
                {  
                    num[3].x=k-1;  
                }  
            }  
            num[3].y=num[2].y;  
        }  
        if(map[3][1]==2)  
        {  
            for(k=2;k<=5;k++)  
            {  
                if(map[3][k]==num[1].y)  
                {  
                    num[3].x=k-1;  
                }  
            }  
            num[3].y=num[1].y;  
        }  
        if(map[3][1]==3)  
        {  
            num[3].x=3;  
            num[3].y=map[3][4];  
        }  
        if(map[3][1]==4)  
        {  
            num[3].y=4;  
            for(k=2;k<=5;k++)  
            {  
                if(map[3][k]==4)  
                {  
                    num[3].x=k-1;  
                    break;  
                }  
            }  
        }  
        //  
        if(map[4][1]==1)  
        {  
            num[4].x=num[1].x;  
            num[4].y=map[4][num[1].x+1];  
        }  
        if(map[4][1]==2)  
        {  
            num[4].x=1;  
            num[4].y=map[4][2];  
        }  
        if(map[4][1]==3||map[4][1]==4)  
        {  
            num[4].x=num[2].x;  
            num[4].y=map[4][num[4].x+1];  
        }  
        //  
        if(map[5][1]==1)  
        {  
            for(k=2;k<=5;k++)  
            {  
                if(map[5][k]==num[1].y)  
                {  
                    num[5].x=k-1;  
                }  
            }  
            num[5].y=num[1].y;  
        }  
        if(map[5][1]==2)  
        {  
            for(k=2;k<=5;k++)  
            {  
                if(map[5][k]==num[2].y)  
                {  
                    num[5].x=k-1;  
                }  
            }  
            num[5].y=num[2].y;  
        }  
        if(map[5][1]==3)  
        {  
            for(k=2;k<=5;k++)  
            {  
                if(map[5][k]==num[4].y)  
                {  
                    num[5].x=k-1;  
                }  
            }  
            num[5].y=num[4].y;  
        }  
        if(map[5][1]==4)  
        {  
            for(k=2;k<=5;k++)  
            {  
                if(map[5][k]==num[3].y)  
                {  
                    num[5].x=k-1;  
                }  
            }  
            num[5].y=num[3].y;  
        }  
        //  
        for(i=1;i<=5;i++)  
        {  
            printf("%d %d\n",num[i].x,num[i].y);  
        }  
    }  
  
}  