#include <bits/stdc++.h>

using namespace std;

int main(){
	int n;
	int ways = 0;
	cin >> n;
	for (int l = 1; l < n; l++){
		if (n % l == 0){
			ways++;
		}
	}
	cout << ways;
	return 0;
}
