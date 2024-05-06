#include <bits/stdc++.h>
using namespace std;

int main(void){
    ios::sync_with_stdio(0), cin.tie(0);
    
    deque<int> DQ;
    int n, m, ans = 0;
    cin >> n >> m;
    
    for(int i = 1; i <= n; i++) DQ.push_back(i);
    
    while(m--){
        int t;
        cin >> t;
        int idx = find(DQ.begin(), DQ.end(), t) - DQ.begin(); // t가 위치하는 index를 find
        
        while(DQ.front() != t){
            if(idx < (int)DQ.size() - idx){ // 앞 데이터를 뒤로 보내야 함
                DQ.push_back(DQ.front());
                DQ.pop_front();
            }
            else{ // 뒤 데이터를 앞으로 보냄
                DQ.push_front(DQ.back());
                DQ.pop_back();
            }
            ans++;
        }
        DQ.pop_front();
    }
    
    cout << ans;
     
}