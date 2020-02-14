#include <bits/stdc++.h>
using namespace std;

int main(){
	int n, temp = 0, input;
	cin >> n;
	for(int i = 0; i < n; i++){
		cin >> input;
		if(input == 1){
			temp = 1;
			break;
		}
	}
	if(temp)
		cout << "HARD";
	else
		cout << "EASY";
	
	return 0;
}
