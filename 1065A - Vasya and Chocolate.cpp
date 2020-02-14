#include <bits/stdc++.h>
using namespace std;

int main(){
	long long int s, a, b, c, t;
	cin >> t;
	for(int i = 0; i < t; i++){
		cin >> s >> a >> b >> c;
		cout << (s / c) + ((s / c) / a) * b << endl;
	}
	
	return 0;
}
