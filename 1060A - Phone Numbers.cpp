#include <bits/stdc++.h>
using namespace std;

int main(){
	int n, eight = 0; string no;
	cin >> n; cin >> no; fflush(stdin);
	for(int i = 0; i < n; i++){
		if(no[i] == 56){
			eight++;
		}
	}
	if(eight >= n/11){
		cout << n/11;
	}
	else if(eight < n/11){
		cout << eight;
	}
	else{
		cout << 0;
	}
	return 0;
}
