#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int arr[10];
int counting(int arr[]) {
	int max = arr[0];
	for (int i = 1; i < 10; i++) {
		if (max < arr[i]) {
            if(i == 6) max = ceil(arr[i] / 2.0);
            else max = arr[i];
        }
	}
	return max;
}
int main() {
	ios::sync_with_stdio(0), cin.tie(0);
	int n = 0;
	cin >> n;

	string s = to_string(n);
	for (int i = 0; i < s.size(); i++) {
		if (s[i] == '9') s[i] = '6';
		arr[s[i] - '0']++;
	}
	int result = counting(arr);
	cout << result;
}