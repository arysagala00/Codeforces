#include <bits/stdc++.h>
using namespace std;

int main(){
	int n, m, t, f = 0;
	cin >> n;
	cin >> t;
	for(int i = 0; i < n-1; i++){
		cin >> m;
		if(t != m){
			f += 1;
			t = m;
		}
	}
	f += 1;
	cout << f;
}
