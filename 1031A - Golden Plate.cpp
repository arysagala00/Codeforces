#include <bits/stdc++.h>
using namespace std;

int main(){
	int w, h, k, cells = 0;
	cin >> w >> h >> k;
	while(k != 0 && w != 0 && h != 0){
		cells = cells + (2 * w) + (2 * h) - 4;
		k--;
		w -= 4;
		h -= 4;
	}
	cout << cells;
		
	return 0;
}
