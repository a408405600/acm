    #include <iostream>  
    #include <cstdio>  
    #include <cstring>  
    #include <algorithm>  
    using namespace std;  
    #define M 1009  
    #define INF 0x3f3f3f3f  
    int mark[M];  
    int s[M];  
    int main()  
    {  
  //  freopen("debug\\ZOJ_3869.txt","r",stdin);
        int n;  
        scanf("%d",&n);  
        while(n--)  
        {  
            memset(mark,0,sizeof(mark));  
            int m;  
            scanf("%d",&m);  
            for(int i = 0;i < m;i++)  
            {  
                scanf("%d",&s[i]);  
                mark[s[i]]++;  
            }  
            int count = 0;  
            int ans = -1;  
            int ok = 0;  
            for(int i = 0;i <= 1000;i++)  
            {  
                if(count < mark[i])  
                {  
                    count = mark[i];  
                    ans = i;  
                }  
            }  
            for(int i = 0;i <= 1000;i++)  
            {  
                if(mark[i] == count && i!=ans)  
                {  
                    printf("Nobody\n");  
                    ok = 1;  
                    break; //Õâ¶¼ÄÜÂ©£¡£¡£¡£¡£¡  
                }  
            }  
            if(!ok)  
                printf("%d\n",ans);  
        }  
        return 0;  
    }  