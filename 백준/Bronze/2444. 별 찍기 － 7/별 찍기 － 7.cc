#include <bits/stdc++.h>
using namespace std;

int main(void){
    ios::sync_with_stdio(0), cin.tie(0);
    
    int n;
    cin >> n;
    
    for(int i = 1; i <= n - 1; i++){
        for(int j = 1; j <= n - i; j++){
            cout << ' ';
        }
        for(int j = 1; j <= 2 * i - 1; j++){
            cout << '*';
        }
        cout << '\n';
    }
    
    for(int i = 1; i <= 2 * n - 1; i++){
        cout << '*';
    }
    cout << '\n';
    
    for(int i = n - 1; i > 0; i--){
        for(int j = n; j > i; j--){
            cout << ' ';
        }
        for(int j = 1; j <= 2 * i - 1; j++){
            cout << '*';
        }
        cout << '\n';
    }
    
    
}