#include<stdio.h>
#include <iostream> 
#include<algorithm>
using namespace std; 
struct book
{
	string name;
	int year;
	int money;
}book[100];

bool name( struct book a,struct book b  )  
{
 	if(a.name != b.name)
 	{
	 	return a.name < b.name;
	 }else if(a.year != b.year)
	 {
 		return a.year < b.year;
 	}else {
	 	return a.money < a.money;
	 }
    	
}

bool year (struct book a, struct book b)
{
	if(a.year != b.year){
		return a.year < b.year;
	}	else if (a.name != b.name ){
		return a.name < b.name;
	}else {
		return a.money < b.money;
	}
}
    
 
bool money (struct book a, struct book b )
{
	if(a.money != b.money){
		return a.money <b.money;
	}else if (a.name != b.name )
	{
		return a.name < b.name;
	} else {
		return a.year < b.year;
	}
}
 main()
{
//	freopen("debug\\ZOJ_2727.txt","r",stdin);
	int t,i,n;
	string rule;
	cin>>t;
	while( t!=0)
	{
		for(i=0;i<t;i++)
		{
			cin>>book[i].name>>book[i].year>>book[i].money;
		}
		cin>>rule;
		if(rule == "Name"){
			sort(book,book+t,name);
		}else if (rule == "Year"){
			sort(book,book+t,year);
		}else if(rule == "Price"){
			sort(book,book+t,money);
		}
		
		for(i=0;i<t;i++)
		{
			cout<<book[i].name<<" "<<book[i].year<<" "<<book[i].money<<endl;
		}
		cin>>t;
		if(t!=0)
		{
			cout<<endl;
		}
		
	}
	
	
}