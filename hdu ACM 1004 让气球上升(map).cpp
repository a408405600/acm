#include <iostream>
#include <string>
#include <map>
using namespace std;
int main()
{
 //  freopen("debug\\hdu_1004.txt","r",stdin); 
	string color,maxcolor;
	int n,max;
	map<string,int>p;
	while(cin>>n && n)
	{
		p.clear();
		while(n--)
		{
			cin>>color;
			p[color]++;
		}
		map<string,int>::iterator it;
		max=0;
		for(it=p.begin(); it!=p.end(); it++){
			if(it->second>max){
                max = it->second;
                maxcolor = it->first;
			}
		}
		cout<<maxcolor<<endl;
	}
	 
}