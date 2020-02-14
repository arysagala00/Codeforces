#include <bits/stdc++.h>
using namespace std;

int main(){
	string p; int temp = 0;
	cin >> p;
	for(int i = 0; i < p.size(); i++){
		if(p[i] == 'H' || p[i] == 'Q' || p[i] == '9'){
			temp = 1;
		}
	}
	if(temp == 1){
		cout << "YES";
	}
	else{
		cout << "NO";
	}
	
	return 0;
}
