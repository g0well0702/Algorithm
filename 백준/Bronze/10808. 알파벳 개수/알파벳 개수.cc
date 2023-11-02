#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0), cin.tie(0);
    string word;
    int arr[26] = {0}; // 지역변수이기 때문에 0으로 초기화 해줘야 한다. 혹은 fill(arr, arr+26, 0); 을 통해서도 가능
    cin >> word; // string 을 cin 으로 바로 입력받을 수 있다
    for(auto c : word){ // 이런 식으로 순회할 수 있다
        arr[c - 'a']++;
    }
    for(int i=0; i<26; i++)
        cout << arr[i] << ' ';
}
