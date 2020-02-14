#include <bits/stdc++.h>
using namespace std;

int main(){
	int n, a, b, c;
	cin >> n;
	a = 1;
	b = 1;
	if((n - 2) % 3 == 0){
		b += 1;
		c = n - 3;
	}
	else{
		c = n - 2;
	}
	
	cout << a << " " << b << " " << c;
		
	return 0;
}
