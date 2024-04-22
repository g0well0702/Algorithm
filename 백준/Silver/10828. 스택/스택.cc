#include <iostream>
#include <stack>
using namespace std;

int main(void) {
    ios::sync_with_stdio(0), cin.tie(0);

    int arr[100000] = {};
    stack<int> S;
    int n, count = 0;
    cin >> n;

    for (int i = 0; i < n; i++) {
        string s;
        cin >> s;
        if (s == "push") {
            int x;
            cin >> x;
            S.push(x);
        }
        else if (s == "top") {
            if (S.empty() == 0)
                arr[count] = S.top();
            else
                arr[count] = -1;
            ++count;
        }
        else if (s == "size") {
            arr[count] = S.size();
            ++count;
        }
        else if (s == "empty") {
            arr[count] = S.empty();
            ++count;
        }
        else if (s == "pop") {
            if (S.empty() == 0) {
                arr[count] = S.top();
                S.pop();
            }
            else
                arr[count] = -1;
            ++count;
        }
    }

    for (int i = 0; i < count; i++) {
        cout << arr[i] << '\n';
    }

}