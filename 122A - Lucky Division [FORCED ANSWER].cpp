#include <bits/stdc++.h>
using namespace std;

int main(){
	int n, lucky = 0, len = 0, nine = 0, one = 0;
	cin >> n;
	if(n % 4 == 0 || n % 7 == 0){
		cout << "YES";
	}
	else{
		for(int i = 0; i < 4; i++){
			if(n == 0){
				break;
			}
			if(n % 10 == 4 || n % 10 == 7 || n % 10 == 9 || n % 10 == 1){
				lucky++;
				if(n % 10 == 9){
					nine++;
				}
				else if(n% 10 == 1){
					one++;
				}
			}
			n = n / 10;
			len++;
		}
		if(lucky == len && nine < len && one < len){
			cout << "YES";
		}
		else{
			cout << "NO";
		}
	}
	
	return 0;
}
