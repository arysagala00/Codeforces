#include<bits/stdc++.h>
using namespace std;

int main(){
	long double k, n, s, p;
	cin >> k >> n >> s >> p;
	//cout << ceil(((ceil(n / s)) * k) / p);
	printf("%.0Lf",ceil(((ceil(n / s)) * k) / p));
}
