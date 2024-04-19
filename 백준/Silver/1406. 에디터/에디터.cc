#include <iostream>
using namespace std;

int unused = 1;

void traverse(char data[], int next[]) {
    int cur = next[0];
    while (cur != -1) {
        cout << data[cur];
        cur = next[cur];
    }
}

void insert(char data[], int prev[], int next[], int& cursor, char ch) {
    data[unused] = ch;
    prev[unused] = cursor;
    next[unused] = next[cursor];
    if (next[cursor] != -1) // 제일 마지막에 삽입하는 게 아니라면
        prev[next[cursor]] = unused;
    next[cursor] = unused;
    cursor = unused;
    unused++;
}

void erase(int prev[], int next[], int &cursor) {
    if (cursor == 0) return;
    next[prev[cursor]] = next[cursor];
    if (next[cursor] != -1)
        prev[next[cursor]] = prev[cursor];
    cursor = prev[cursor];
}

int main(void) {
    ios::sync_with_stdio(0), cin.tie(0);

    char data[1000005];
    int prev[1000005], next[1000005];
    fill(data, data + 1000005, -1);
    fill(prev, prev + 1000005, -1);
    fill(next, next + 1000005, -1);

    string s;
    int m;
    char input, ch;

    cin >> s;
    int len = s.size();
    int cursor = len; // 처음 커서는 배열의 제일 마지막에 위치함
    unused += len; // 배열에서 사용하지 않은 인덱스로 업데이트 해줘야함, 입력을 먼저 받는 스트링 길이 더해줘야 다음 입력 받을 수 있음.

    for (int i = 1; i <= len; i++) { // 더미 헤드에 값을 넣지 않기 위해서
        data[i] = s[i - 1];
        prev[i] = prev[i - 1] + 1;
        next[i - 1] = i; // 처음 입력 받을 때는 연속해서 넣게 됨. 그래서 이런 규칙성이 있음.
    }

    cin >> m;
    for (int i = 0; i < m; i++) {
        cin >> input;
        if (input == 'P') { // len++
            cin >> ch;
            insert(data, prev, next, cursor, ch);
            ++len;
        }
        else if (input == 'L') {
            if (prev[cursor] != -1) cursor = prev[cursor]; // 더미헤드에 접근 못하게
        }
        else if (input == 'D') {
            if (next[cursor] != -1) cursor = next[cursor]; // 제일 끝 문자를 넘어가지 못하게
        }
        else if (input == 'B') { // len--
            erase(prev, next, cursor);
            --len;
        }
    }

    traverse(data, next);

    return 0;
}