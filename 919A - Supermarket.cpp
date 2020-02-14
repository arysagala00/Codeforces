#include<bits/stdc++.h>
using namespace std;

int main(){
    long double n, m, a, b, x, min = 10001;
    cin >> n >> m;
    for (int i = 0; i < n; i++){
        cin >> a >> b;
        x = a/b*m;
        min = (x < min)? x:min;
    }

    printf("%.12Lf",min);
    return 0;
}
