#include <bits/stdc++.h>
using namespace std;

int arr0[6];
int arr1[6];
int main(){
    int n, k, s, g, count = 0;
    cin >> n >> k;
    
    for(int i =0; i <n; i++){
        cin >> s >> g;
        if(s == 0) arr0[g-1]++;
        else arr1[g-1]++;
    }
    
    for(int i= 0; i<6; i++){
        if(arr0[i] % k == 0) count += arr0[i] / k;
        else count += (arr0[i] / k) + 1;
    }
    
    for(int i= 0; i<6; i++){
        if(arr1[i] % k == 0) count += arr1[i] / k;
        else count += (arr1[i] / k) + 1;
    }
    cout << count;
}