#include<iostream>
 
using namespace std;
 
int main(){
	int n,count=0;
	string a;
	string b;
	cin >> n;
	cin >> a;
	for(int i=0;i<n;i++){
		
		if(b.size()%2==0){
			if(a[i]==a[i+1]){
				
			}else{
				b+=a[i];
			}
		}else{
			b+=a[i];
		}
	}
	if(b.size()%2!=0){
		cout << a.size()-(b.size()-1)<<endl;
		for(int i=0;i<b.size();i++){
			if(i!=b.size()-1){
			
			cout << b[i];
			}
		}
	}else{
	cout << a.size()-b.size()<< endl;
	cout << b;
}		
		
 
	
	return 0;	
}
