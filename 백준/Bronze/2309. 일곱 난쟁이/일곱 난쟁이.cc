#include <bits/stdc++.h>
using namespace std;

int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int arr[9] = {0};
    int sum = 0;
    
    // 무조건 일곱 난쟁이가 존재한다고 했으니까 일단 다 더하고 가짜 두 놈 빼는 식으로 접근
    for(int i = 0; i < 9; i++){
        cin >> arr[i];
        sum += arr[i];
    }
    
    for(int i = 0; i < 8; i++){
        for(int j = i + 1; j < 9; j++){
            if(sum - (arr[i] + arr[j]) == 100){ // 가짜 두 놈 찾으면 제일 뒤로 보내기
                swap(arr[i], arr[7]);
                swap(arr[j], arr[8]);
            }
        }
    }
    
    sort(arr, arr + 7); // 제일 뒤 두 놈은 가짜니까 그 전까지 sort
    
    for(int i = 0; i < 7; i++){
        cout << arr[i] << '\n';
    }
    
}