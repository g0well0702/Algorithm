#include <bits/stdc++.h>
using namespace std;

int main(void){
    ios::sync_with_stdio(0), cin.tie(0);
    
    int n;
    int same[1000] = {0};
    string s1, s2;
    cin >> n;
    
    for(int i = 0; i < n; i++){
        
        int arr1[26] = {0}, arr2[26] = {0};
        cin >> s1 >> s2;
        if(s1.size() != s2.size()) continue;
        
        for(int i = 0; i < s1.size(); i++){
            arr1[s1[i] - 'a']++;
            arr2[s2[i] - 'a']++;
        }
        
        int flag = 0;
        
        for(int j = 0; j < 26; j++){
                if(arr1[j] == arr2[j]) flag++;
        }
        
        if(flag == 26) same[i] = 1;
        else same[i] = 0;
    }
    
    for(int i = 0; i < n; i++){
        if(same[i] == 1) cout << "Possible" << '\n';
        else cout << "Impossible" << '\n';
    }
    
}