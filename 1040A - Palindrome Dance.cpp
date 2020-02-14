#include <bits/stdc++.h>
using namespace std;

int dgenap (int n, int a, int b, char color[]){
    int total = 0;
    for(int i = 0; i < n/2; i++){
        if(color[i] != color[n - i - 1] && color[i] != 50 && color[n - i - 1] != 50){
            return -1;
        }
        else if(color[i] != color[n - i - 1] && color[i] == 50 && color[n - i - 1] != 50){
            if(color[n - i - 1] == 48){
                total += a;
            }
            else if(color[n - i - 1] == 49){
                total += b;
            }
        }
        else if(color[i] != color[n - i - 1] && color[n - i - 1] == 50 && color[i] != 50){
            if(color[i] == 48){
                total += a;
            }
            else if(color[i] == 49){
                total += b;
            }
        }
        else if(color[i] == color[n - i - 1] && color[i] == 50 && color[n - i - 1] == 50){
            if(a < b){
                total += 2 * a;
            }
            else{
                total += 2 * b;
            }
        }
    }
    return total;
}

int dganjil (int n, int a, int b, char color[]){
    int total = 0;
    for(int i = 0; i < (n/2) + 1; i++){
        if(color[i] != color[n - i - 1] && color[i] != 50 && color[n - i - 1] != 50 && i != n / 2){
            return -1;
        }
        else if(color[i] != color[n - i - 1] && color[i] == 50 && color[n - i - 1] != 50 && i != n / 2){
            if(color[n - i - 1] == 48){
                total += a;
            }
            else if(color[n - i - 1] == 49){
                total += b;
            }
        }
        else if(color[i] != color[n - i - 1] && color[n - i - 1] == 50 && color[i] != 50 && i != n / 2){
            if(color[i] == 48){
                total += a;
            }
            else if(color[i] == 49){
                total += b;
            }
        }
        else if(color[i] == color[n - i - 1] && color[i] == 50 && color[n - i - 1] == 50 && i != n / 2){
            if(a < b){
                total += 2 * a;
            }
            else{
                total += 2 * b;
            }
        }
        else if(i == n/2 && color[i] == 50){
            if(a < b){
                total += a;
            }
            else{
                total += b;
            }
        }
    }
    return total;
}

int main(){
    int n, a, b, bayar;
    cin >> n >> a >> b;
    char color[n];
    for(int i = 0; i < n; i++){
        cin >> color[i];
    }
    if(n % 2 == 0){
        bayar = dgenap(n, a, b, color);
    }
    else{
        bayar = dganjil(n, a, b, color);
    }
    cout << bayar;

    return 0;
}
