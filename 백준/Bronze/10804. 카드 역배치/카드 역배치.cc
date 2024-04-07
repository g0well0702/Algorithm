#include <iostream>
using namespace std;

// 배열과 구간을 받아 역순으로 출력하는 함수
void reverse(int arr[], int a, int b) {
    int x = b - a + 1; // 칸 개수
    if (a == b) return; // a와 b 가 같을 때는 swap 이 일어나지 않는다
    for (int i = 0; i < x / 2; i++) { // 홀수던 짝수던 몫의 크기만큼 swap이 일어난다
        swap(arr[a-1], arr[b-1]);
        a++;
        b--;
    }
}
int main() {
    ios::sync_with_stdio(0), cin.tie(0);
    int arr[20];
    int a, b;
    for (int i = 0; i < 20; i++) {
        arr[i] = i + 1;
    }
    for (int i = 0; i < 10; i++) {
        cin >> a >> b;
        reverse(arr, a, b);
    }
    for (int i = 0; i < 20; i++) {
        cout << arr[i] << " ";
    }
}