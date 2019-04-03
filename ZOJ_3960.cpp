#include<stdio.h>
#include <iostream> 
#include<algorithm>
#include <map> 
using namespace std;
#define LL long long  
const int INF = 0x3f3f3f3f;  
  
int q, m, n;  
string s,ss[205];  
int a[4000009];  
  
int main()  
{  
	freopen("debug\\ZOJ_3960.txt","r",stdin);
    int t;  
    scanf("%d", &t);  
    while (t--)  
    {  
        map<string, int>mp;  
        memset(a, 0, sizeof a);  
        scanf("%d%d", &q, &m);  
        scanf("%d", &n);  
        for (int i = 1; i <= n; i++)  
        {  
            cin >> s;  
            mp[s] = i;  
            ss[i] = s;  
        }  
        for (int i = 0; i < m; i++)  
        {  
            int k;  
            scanf("%d", &k);  
            for (int j = 0; j < k; j++)  
            {  
                cin >>s;  
                int kk = mp[s];  
                a[kk] |= (1 << i);  
            }  
        }  
        while (q--)  
        {  
            int k = 0,x;  
            for (int i = 0; i < m; i++)  
            {  
                scanf("%d", &x);  
                if (x == 1) k |= (1 << i);  
            }  
            int ans = -1;  
            for (int i = 1; i <= n; i++)  
            {  
                if (k == a[i])  
                {  
                    if (ans == -1) ans = i;  
                    else { ans = -1; break; }  
                }  
            }  
            if (ans == -1) printf("Let's go to the library!!\n");  
            else cout << ss[ans] << endl;  
        }  
    }  
    return 0;  
}  