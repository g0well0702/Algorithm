#include <bits/stdc++.h>
using namespace std;

int freq1[26];
int freq2[26];
int main(){
    int count = 0;
    ios::sync_with_stdio(0), cin.tie(0);
    string first, second;
    cin >> first >> second;
    
    for(int i=0;i<first.length();i++){
        freq1[first[i]-'a']++;
    }
    for(int i=0;i<second.length();i++){
        freq2[second[i]-'a']++;
    }
    for(int i=0;i<26;i++){
        if(freq1[i] != freq2[i]){
            count += abs(freq1[i] - freq2[i]);
        }
    }
    cout << count;
}