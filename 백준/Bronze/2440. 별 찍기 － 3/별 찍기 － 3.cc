#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0), cin.tie(0);
    int n=0;
    cin >> n;
    for(int i = n; i>0; i--){
        int j = 0;
        for(; j<i;j++){
            cout << '*';
        }
        cout << '\n';
    }
}