#include<stdio.h>
#include <map>
#include <string>  
#include<algorithm>
#include <iostream>  
using namespace std; 
int main()
{
	map<int,string> mapStudent;
	mapStudent.insert(pair<int,string>(1,"student_ony"));
	mapStudent.insert(pair<int,string>(1,"student_ony"));
	mapStudent.insert(pair<int,string>(1,"student_ony"));
	 map<int, string>::iterator iter;  
  
    for(iter = mapStudent.begin(); iter != mapStudent.end(); iter++) {
    	
  
       cout<<iter->first<<' '<<iter->second<<endl;  
  
}  
} 