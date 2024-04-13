#include <bits/stdc++.h>
using namespace std;

int arr[9];

int main(void){
    ios::sync_with_stdio(0), cin.tie(0);
    
    int n;
    cin >> n;
    
    while(n > 0){
        if(n % 10 == 9) arr[6]++;
        else arr[n % 10]++;
        n /= 10;
    }
    
    if(arr[6] & 1) arr[6] = arr[6] / 2 + 1;
    else arr[6] /= 2;
    
    int max = arr[0];
    
    for(int i = 1; i < 9; i++){
        if(arr[i] > max) max = arr[i];
    }
    
    cout << max;
    
}