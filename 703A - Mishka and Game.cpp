#include<iostream>

using namespace std;

int main(){
	int n,mishka,chris,mishkapoint=0,chrispoint=0;
	cin>>n;
	for (int i=1;i<=n;i++){
		cin>>mishka>>chris;
		if (mishka>chris){
			mishkapoint++;
		}
		if (chris>mishka){
			chrispoint++;
		}
		mishka=0;chris=0;
	}
	if (mishkapoint>chrispoint){
		cout<<"Mishka"<<endl;
	}
	else if (chrispoint>mishkapoint){
		cout<<"Chris"<<endl;
	}
	else{
		cout<<"Friendship is magic!^^"<<endl;
	}
	return 0;
}
