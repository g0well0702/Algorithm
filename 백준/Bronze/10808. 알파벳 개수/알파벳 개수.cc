#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0), cin.tie(0);
    string word;
    int arr[26] = {0};
    cin >> word;
    for(int c : word){
        arr[c - 'a']++;
    }
    for(int i=0; i<26; i++)
        cout << arr[i] << ' ';
}