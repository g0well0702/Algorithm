#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int arr[10];

// max 값을 반환, 이 값이 총 몇 세트가 필요한지 나타내준다
int counting(int arr[]) {
	int max = arr[0];
	for (int i = 1; i < 10; i++) {
		if (max < arr[i]) { // max 갱신 조건, 같은 때는 갱신할 필요가 없다. 여기서 인덱스가 6일 때와 아닐 때를 나눠줘야 한다
            if(i == 6) max = ceil(arr[i] / 2.0); // 만약 i가 6이면 9도 같이 카운팅 된것이므로 2로 나눠주고 값을 반올림(ceil은 올림이긴 한데 큰 상관이 없음, 어차피 0.5 로 나올테니까)
            else max = arr[i]; // i가 6이 아닐 때는 원래대로 최댓값을 설정하면 된다
        }
	}
	return max;
}
int main() {
	ios::sync_with_stdio(0), cin.tie(0);
	int n = 0;
	cin >> n;

	string s = to_string(n); // int -> string
	for (int i = 0; i < s.size(); i++) {
		if (s[i] == '9') s[i] = '6'; // 9랑 6이랑 같이 카운팅해서 나중에 2로 나누어주자.
		arr[s[i] - '0']++;
	}
	int result = counting(arr);
	cout << result;
}
