#include <bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin >> n;
	int array[n];
	for(int i = 0; i < n; i++){
		cin >> array[i];
	}
	sort(array,array+n);
	int temp = 0;
	for(int i = 1; i < n; i++){
		if(array[i - 1] + 1 != array[i]){
			temp += array[i] - array[i - 1] - 1;
		}
	}
	cout << temp;
	
	return 0;
}
