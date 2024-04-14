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
 
    for (int i = 0; i < n; i++) {
        if (arr1[i] < x && arr2[x - arr1[i]] > 0) {
            count += arr2[x-arr1[i]];
        }
        arr2[arr1[i]]++;
    }
    cout << count;
    return 0;
}