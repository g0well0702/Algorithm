#include <bits/stdc++.h>
using namespace std;

const int MX = 100005;
int pos = 0;

void push(int data[], int x){
    data[pos] = x;
    ++pos;
}

void pop(int data[]){
    --pos;
}

int main(void){
    ios::sync_with_stdio(0), cin.tie(0);
    
    int data[MX] = {};
    int k, sum = 0;
    cin >> k;
    for(int i = 0; i < k; i++){
        int x;
        cin >> x;
        if(x != 0){
            push(data, x);
        }
        else pop(data);
    }
    for(int i = 0; i < pos; i++)
        sum += data[i];
    cout << sum;
}