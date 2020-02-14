#include<iostream>
#include<vector>
using namespace std;
 
 
int main(){
	string str;
	char a;
	int n;
	int co=0;
	int cz=0;
	int ce=0;
	int cr=0;
	int cn=0;
	cin >> n;
	cin >> str;
	for(int i=0;i<str.size();i++){	
		if(str[i]=='o'){
			co++;
		}else if(str[i]=='z'){
			cz++;
		}else if(str[i]=='e'){
			ce++;
		}else if(str[i]=='r'){
			cr++;
		}else if(str[i]=='n'){
			cn++;
		}
	}
	str = "";
	while(true){
		if(co > 0 && cn > 0 && ce > 0){
			str += "1";
			co--;cn--;ce--;
		}else if(cz > 0 && ce > 0 && cr> 0 && co > 0){
			str +="0";
			cz--;ce--;cr--;co--;
		}else{
			break;
		}
		str+=" ";
	}
	cout << str;
	
}
