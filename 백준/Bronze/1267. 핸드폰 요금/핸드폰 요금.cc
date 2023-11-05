#include <iostream>
using namespace std;

int main() {
    ios::sync_with_stdio(0), cin.tie(0);
    int n = 0;
    int arr[20] = { 0 };
    int minsik_sum = 0;
    int youngsik_sum = 0;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    for (int i = 0; i < n; i++) {
        youngsik_sum += (arr[i] / 30 * 10) + 10;
        minsik_sum += (arr[i] / 60 * 15) + 15;
    }

    if (minsik_sum > youngsik_sum)  cout << 'Y' << ' ' << youngsik_sum;
    else if (minsik_sum == youngsik_sum)  cout << 'Y' << ' ' << 'M' << ' ' << minsik_sum;
    else  cout << 'M' << ' ' << minsik_sum;
}