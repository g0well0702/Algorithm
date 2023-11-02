#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0), cin.tie(0);
    int n = 0;
    cin >> n;
    
    for(int i = 1; i <= n-1; i++){
        for(int j = 1; j <= n-i; j++) cout << ' '; // i 가 1씩 증가할 때마다 공백은 한 칸씩 줄어든다
        for(int j = 1; j <= 2*i-1; j++) cout << '*'; // i 가 1씩 증가할 때마다 별이 두개씩 증가한다
        cout << '\n';
    }
    
    for(int i = 1; i <= 2*n-1; i++) cout << '*'; // 중간에 별이 9개 찍혀야 한다
    cout << '\n';
    
    for(int i = n-1; i >= 1; i--){
        for(int j = 1; j <= n-i; j++) cout << ' '; // i가 1씩 감소할 때마다 공백은 한 칸씩 증가한다.
        for(int j = 1; j <= 2*i-1; j++) cout << '*'; // i가 1씩 감소할 때마다 두 칸씩 감소한다
        cout << '\n';
    }
}