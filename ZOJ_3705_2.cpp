#include<stdio.h>  
#include<string.h>  
#include<algorithm>  
using namespace std;  
int a[1005];  
int b[1005];  
char tname[150];  
int t,n,m,r,q,s;  
struct node  
{  
    char name[150];  
    int rank;  
} team[1005];  
struct node1  
{  
    char pname[150];  
    double pt;  
} p[1005];  
int cmp(int a,int b)  
{  
    return a>b;  
}  
int find()  
{  
    for(int i=0; i<q; i++)  
    {  
        if(strcmp(team[i].name,tname)==0)  
            return team[i].rank;  
    }  
    return 0;  
}  
int find1(int aa)  
{  
    for(int i=0; i<r; i++)  
    {  
        if(aa==a[i])  
            return 1;  
    }  
    return 0;  
}  
int find2(int aa)  
{  
    for(int i=0; i<s; i++)  
    {  
        if(aa==b[i])  
            return 1;  
    }  
    return 0;  
}  
double Max(double i,double j)  
{  
    if(i>j)  
    return i;  
    return j;  
}  
bool visit[20007];  
int prime[20007];  
int num=0;  
void init_prim(int n)//prime存的是下标，visit存的是数。visit[5]==true。  
{  
    memset(visit,true,sizeof(visit));  
    for(int i=2; i<=n; ++i)  
    {  
        if(visit[i] ==true)  
        {  
            num++;  
            prime[num] =i;  
        }  
        for(int j=1; ((j<=num)&&(i*prime[j] <=n)); ++j)  
        {  
            visit[i*prime[j] ]=false;  
            if(i%prime[j] ==0) break;  
        }  
    }  
}  
int cmp1(node1 j,node1 k)  
{  
    if(j.pt==k.pt)  
    return strcmp(j.pname,k.pname)<0;  
//        return j.pname<k.pname;  
    return j.pt>k.pt;  
}  
int main()  
{  
freopen("debug\\ZOJ_3705.txt","r",stdin);
    char sex;  
    int f[1005],e;  
    init_prim(10000);  
    while(scanf("%d",&t)!=EOF)  
    {  
        while(t--)  
        {  
            memset(a,0,sizeof(a));  
            memset(b,0,sizeof(b));  
            scanf("%d%d",&n,&m);  
            scanf("%d",&r);  
            for(int i=0; i<r; i++)  
            {  
                scanf("%d",&a[i]);  
            }  
            scanf("%d",&s);  
            for(int i=0; i<s; i++)  
                scanf("%d",&b[i]);  
            scanf("%d",&q);  
            for(int i=0; i<q; i++)  
            {  
                scanf("%s%d",team[i].name,&team[i].rank);  
            }  
            int c,d;  
  
            for(int i=0; i<n; i++)  
            {  
                double sum=0;  
                char w;  
                scanf("%s%s%c%c%d%d",p[i].pname,tname,&w,&sex,&c,&d);  
                // printf("***%s %s %c %d %d\n",p[i].pname,tname,sex,c,d);  
                if(sex=='F')  
                    sum+=33;  
                int ans=find();  
                if(ans==1)  
                    sum+=36;  
                else if(ans==2)  
                    sum+=27;  
                else if(ans==3)  
                    sum+=18;  
                else  
                    sum+=0;  
                for(int j=0; j<c; j++)  
                {  
                    scanf("%d",&e);  
                    if(find1(e))  
                    {  
                        sum+=2.5;  
                    }  
                    else if(find2(e))  
                    {  
                        sum+=1.5;  
                    }  
                    else if(visit[e])  
                    {  
                        sum+=1;  
                    }  
                    else  
                    {  
                        sum+=0.3;  
                    }  
                }  
                memset(f,0,sizeof(f));  
                for(int j=0; j<d; j++)  
                {  
                    scanf("%d",&f[j]);  
                }  
                sort(f,f+d,cmp);  
//                double MAX=1e-9;  
//                if((f[2]*1.0-1200.0)/100.0>MAX)  
//                    MAX=(f[2]-1200)/100;  
//                    else  
//                    MAX=0.0;  
//                sum+=(MAX*1.5);  
                sum+=(Max(0.0, (f[2]*1.0 - 1200.0) / 100.0) * 1.5);  
                p[i].pt=sum;  
            }  
            sort(p,p+n,cmp1);  
            for(int i=0; i<n; i++)  
            {  
                printf("%s %.3f\n",p[i].pname,p[i].pt);  
            }  
        }  
    }  
    return 0;  
}