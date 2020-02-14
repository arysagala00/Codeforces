#include <bits/stdc++.h>

using namespace std;

int main(){
	int n, j = 0, temp = 0;
	cin >> n;
	string a;
	cin >> a;
	while(j<n){
		if(a[j]!=a[j+1]){
			temp++; 
			j+=2;
		}
		else
		{
			temp++;
			j++;
		}
			
	}
	cout << temp;
}
