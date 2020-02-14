#include<iostream>

using namespace std;

int main(){
	int n=0;
	cin >> n;
	string a,b,c,d;
	
	for(int i=0;i<n;i++){
		int counter=0;
		int swap=0;
		cin >> a;
		cin >> b;
		cin >> c;
		for(int j=0;j<a.size();j++){
			if(c[j]==a[j]){
				b[j]=c[j];
				swap+=1;
			}else if(c[j]==b[j]){
				a[j]=c[j];
				swap+=1;
			}
		}
		if((a==b && swap==a.size())){
			
			cout << "YES" << endl;
		}else{
			cout << "NO" << endl;
		}
	}
}
