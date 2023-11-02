#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0), cin.tie(0);
    int n = 0;
    cin >> n;
    for(int i = n-1; i>= 1; i--){
        for(int j = n-1; j >= i; j--) cout << '*';
        for(int j = 1; j <= 2*i; j++) cout << ' ';
        for(int j = n-1; j >= i; j--) cout << '*';
        cout << '\n';
    }
    
    for(int i = 1; i <= 2*n; i++) cout << '*';
    cout << '\n';
    
    for(int i = 1; i <= n-1; i++){
        for(int j = n-1; j >= i; j--) cout << '*';
        for(int j = 1; j <= 2*i; j++) cout << ' ';
        for(int j = n-1; j >= i; j--) cout << '*';
        cout << '\n';
    }
}