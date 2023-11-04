#include <bits/stdc++.h>
using namespace std;

int arr[100];
int main(){
    int n,x,count = 0;
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    cin >> x;
    
    for(int i = 0; i < n; i++){
        if(arr[i] == x) count++;
    }
    cout << count;
}