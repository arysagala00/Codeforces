#include <bits/stdc++.h>
using namespace std;

int main(){
	int n, flag = 0;
	cin >> n;
	for(int i = 1; i <= 500; i++){
		if((i*(i+1))/2 == n){
			flag = 1;
			break;
		}
	}
	if(flag){
		cout << "YES";
	}
	else
		cout << "NO";
	return 0;
}
