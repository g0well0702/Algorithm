#include <iostream>
using namespace std;

int arr1[2000000];
int arr2[2000000];
int main() {
    ios::sync_with_stdio(0), cin.tie(0);

    int n, x, count = 0;
    cin >> n;
    
    for (int i = 0; i < n; i++)
        cin >> arr1[i];

    cin >> x;
    //틀린 답안 : 여기서 x 값을 배열의 값들과 계산하게 되는 경우. 당연히 배열의 값이 x 값보다 클 수는 있음
    
    
 
    for (int i = 0; i < n; i++) {
        if (arr1[i] < x && arr2[x - arr1[i]] > 0) { // arr1[i] < x 이 조건이 필수, 왜냐면 x 가 더 작을 때는 인덱스 값이 음수가 되기 때문
            count += arr2[x-arr1[i]];
        }
        arr2[arr1[i]]++;
    }
    cout << count;
    return 0;
}
