#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, x, y;
    int out = 1;
    vector<int> s;

    cin >> n;
    for (int i = 0; i < n; i++){
        cin >> x;
        s.push_back(x);
    }

    sort(s.begin(),s.end());

    for(int i = 0; i < n; i++){
        if(s[i] != 0){
            y = s[i];
            break;
        }
    }
    for(int i = 1; i < n; i++){
        if (y != s[i] && s[i] != 0){
            out++;
            y = s[i];
        }  
    }

    cout << out;

    return 0;
}
