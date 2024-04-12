#include <bits/stdc++.h>
using namespace std;

int arr[10];

int main(void){
    ios::sync_with_stdio(0), cin.tie(0);
    
    int a, b, c, result;
    cin >> a >> b >> c;
    
    string s = to_string(a * b * c);
    
    for(auto c : s)
        arr[c - '0']++;
    
    for(int i = 0; i < 10; i++)
        cout << arr[i] << '\n';
}