#include <bits/stdc++.h>
using namespace std;

int main(void){
    ios::sync_with_stdio(0), cin.tie(0);
    
    int arr[9];
    int max = 0, index = 0;
    for(int i = 0; i < 9; i++){
        cin >> arr[i];
    }
    max = arr[0];
    for(int i = 1; i < 9; i++){
        if(arr[i] > max) max = arr[i];
    }
    
    for(int i = 0; i < 9; i++){
        if(arr[i] == max) index = i + 1;
    }
    
    cout << max << '\n' << index;
    
    
}