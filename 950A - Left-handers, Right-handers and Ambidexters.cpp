#include <bits/stdc++.h>
using namespace std;

int main(){
	int l, r, a, t = 0;
	cin >> l >> r >> a;
	if(l == r){
		t += l + r;
		t += (a/2) * 2;
	}
	else if(l < r){
		t += l * 2;
		r -= l;
		if(r > a){
			t += a * 2;
		}
		else{
			t += r * 2;
			a -= r;
			t += (a/2) * 2;
		}
	}
	else if(l > r){
		t += r * 2;
		l -= r;
		if(l > a){
			t += a * 2;
		}
		else{
			t += l * 2;
			a -= l;
			t += (a/2) * 2;
		}
	}
	cout << t;
}
