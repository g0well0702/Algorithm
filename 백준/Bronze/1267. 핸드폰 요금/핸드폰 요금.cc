#include <bits/stdc++.h>
using namespace std;

int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int n, x, Y = 0, M = 0;
    
    cin >> n;
    
    for(int i = 0; i < n; i++){
        cin >> x;
        Y += 10 + (x / 30) * 10;
        M += 15 + (x / 60) * 15;
    }
    
    if(Y > M) cout << 'M' << ' ' << M;
    else if(Y == M) cout << 'Y' << ' ' << 'M' << ' ' << Y;
    else cout << 'Y' << ' ' << Y;
    
}