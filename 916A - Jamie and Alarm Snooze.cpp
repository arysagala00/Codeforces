#include <bits/stdc++.h>
using namespace std;

int ceklucky(int z){
    switch(z){
        case 07:
        case 17:
        case 27:
        case 37:
        case 47:
        case 57:
            return 1;
        default:
            return 0;
    }
}

int main(){
    int x, hh, mm, min = 0, i = 1;
    cin >> x;
    cin >> hh >> mm;
    while(i != 0){
        if(ceklucky(hh) || ceklucky(mm)){
            break;
        }
        else{
            mm = mm - x;
            if(mm < 0){
                mm = 60 + mm;
                hh -= 1;
                if(hh < 0){
                    hh = 24 + hh;
                }
            }
            min++;
        }
    }
    cout << min;

    return 0;
}
