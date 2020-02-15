#include<iostream>
 
using namespace std;
 
 
int main(){
	int n=0,m=0,a=0,has=0,has2=0;
	cin >> n >> m >> a;
	if(n%a==0){		
		has=n/a;
	}else{
		has = (n/a) +1;
	}
	if(m%a==0){
		has2=m/a;
	}else{
		has2 = (m/a) +1;
		
}
	
	cout << (long long int) has * has2 << endl;
 
	
	
}
