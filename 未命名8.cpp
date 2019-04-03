#include <iostream>  
#include <cstdio>  
#include <cstring>  
#include <cmath>  
const double maxn=1e-6;  
using namespace std;  
  
  
double ff(double n)  
{  
    double p;  
    p=8*n*n*n*n+7*n*n*n+2*n*n+3*n+6;  
    return p;  
}  
  
  
double chaozhao(double  y)  
{  
   double  x1=0.0,x2=100.0;  
   double y1,y2;  
   y1=ff(x1);  
   y2=ff(x2);  
   while(fabs(y1-y2)>maxn)  
   {  
       double mid;  
      mid=(x1+x2)/2;  
       if(ff(mid)>=y)  
       {  
           x2=mid;  
           y2=ff(x2);  
       }  
       else  
       {  
           x1=mid;  
           y1=ff(x1);  
       }  
   }  
    return x1;  
}  
  
  
  
  
int main()  
{  
    int t,i;  
    double y;  
    while(scanf("%d",&t)!=EOF)  
    {  
        double min1;  
        double max1;  
        min1=ff(0.0);  
        max1=ff(100.0);  
        for(i=1; i<=t; i++)  
        {  
            scanf("%lf",&y);  
            if(y>max1||y<min1)  
            {  
                cout<<"No solution!"<<endl;  
            }  
            else  
            {  
                double k;  
                k=chaozhao(y);  
                printf("%.4lf\n",k);  
            }  
        }  
    }  
    return 0;  
}  
