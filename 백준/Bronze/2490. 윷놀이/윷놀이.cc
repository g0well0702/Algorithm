#include <bits/stdc++.h>
using namespace std;

int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int a, b, c, d;
    
    for(int i = 0; i < 3; i++){
        cin >> a >> b >> c >> d;
        int sum = a + b + c + d;
        if(sum == 0) cout << 'D' << '\n';
        else if(sum == 1) cout << 'C' << '\n';
        else if(sum == 2) cout << 'B' << '\n';
        else if(sum == 3) cout << 'A' << '\n';
        else cout << 'E' << '\n';
    }
}