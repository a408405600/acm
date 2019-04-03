#include<stdio.h>
#include <iostream> 
#include<algorithm>
#include<string.h>
using namespace std; 
int main()
{
	int flag;
	char c;
	char s1[]={"-+QWERTYUIOP{}_=qwertyuiop[]SDFGHJKL:\"sdfghjkl;\'ZXCVBN<>zxcvbn,.?/"};  
	char s2[]={"[}\"<>PYFGCRL?+{]\',.pyfgcrl/=OEUIDHTNS_oeuidhtns-:QJKXBWV;qjkxbwvZz"};
	while(scanf("%c",&c)!=EOF)
	{
		flag=1;
		for(int i=0;i<strlen(s1);i++)
		{
			if(s1[i]==c)
			{
				cout<<s2[i];
				flag=0;
			}
		}
		if(flag)
		{
			cout<<c;
		}
		
		
		/*switch (c){
		case 'Q': cout<<"\"";  break;	
		case 'q': cout<<",";  break;
		case 'W': cout<<"<";  break;
		case 'w': cout<<".";  break;
		case 'E': cout<<">";  break;
		case 'e': cout<<".";  break;
		case 'R': cout<<"p";  break;
		case 'r': cout<<"P";  break;
		case 'T': cout<<"Y";  break;
		case 't': cout<<"y";  break;
		case 'Y': cout<<"F";  break;
		case 'y': cout<<"f";  break;
		case 'U': cout<<"G";  break;
		case 'u': cout<<"g";  break;
		case 'I': cout<<"C";  break;
		case 'i': cout<<"c";  break;
		case 'O': cout<<"R";  break;
		case 'o': cout<<"r";  break;
		case 'p': cout<<"L";  break;
		case 'P': cout<<"l";  break;
		case '{': cout<<"?";  break;
		case '[': cout<<"/";  break;
		case '}': cout<<"+";  break;
		case ']': cout<<"=";  break;
		case 'S': cout<<"O";  break;
		case 's': cout<<"o";  break;
		case 'E': cout<<"D";  break;
		case 'e': cout<<"d";  break;
		case 'F': cout<<"U";  break;
		case 'f': cout<<"u";  break;
		case 'G': cout<<"I";  break;
		case 'g': cout<<"i";  break;
		case 'H': cout<<"D";  break;
		case 'h': cout<<"d";  break;
		case 'K': cout<<"T";  break;
		case 'k': cout<<"t";  break;
		case 'L': cout<<"N";  break;
		case 'l': cout<<"n";  break;
		case ':': cout<<"S";  break;
		case ';': cout<<"s";  break;
		case '"': cout<<"l";  break;
		} */
	}
}