#include <iostream>
#include <list>
using namespace std;

int main(void) {
    ios::sync_with_stdio(0), cin.tie(0);

    list<char> L = {};
    list<char>::iterator cursor = L.end();

    int n;
    cin >> n;

    for (int i = 0; i < n; i++) {
        string s;
        cin >> s;
        for (int j = 0; j < s.size(); j++) {
            if (s[j] == '<') {
                auto tempCursor = cursor;
                if (*(--tempCursor) != '\n') {
                    --cursor;
                }
            }
            else if (s[j] == '>') {
                if(cursor != L.end())
                    ++cursor;
            }
            else if (s[j] == '-') {
                auto tempCursor = cursor;
                if (*(--tempCursor) != '\n') {
                    --cursor;
                    cursor = L.erase(cursor);
                }
            }
            else {
                L.insert(cursor, s[j]);
            }
        }
        cursor = L.end(); // 커서를 마지막으로 초기화
        L.insert(cursor, '\n');
    }

    for (auto c : L) cout << c;
}