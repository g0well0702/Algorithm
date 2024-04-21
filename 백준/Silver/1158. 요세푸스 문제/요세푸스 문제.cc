#include <iostream>
#include <list>
using namespace std;

int main(void) {
    ios::sync_with_stdio(0), cin.tie(0);

    list<int> L = {};

    int n;
    cin >> n;

    for (int i = 1; i <= n; i++) {
        L.push_back(i);
    }
    list<int>::iterator it = L.begin(); // 시작은 L.end() 로 해야 함, 그래야 예시처럼 노드를 지울 수 있음
    // 생각이 바뀜, L.begin() 으로 설정하고 k-1 칸 가면 됨. erase 함수가 노드 지우고 오른쪽 노드를 반환하기 때문에
    int k;
    cin >> k;

    cout << '<';
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < k - 1; j++) {
            auto temp = it;
            if (++temp == L.end()) it = L.begin(); // iterator 가 L.end() 일때 L.begin() 으로 이동시켜야함
            else ++it;
        }
        if(i == n-1) cout << *(it);
        else cout << *(it) << ',' << ' ';
        it = L.erase(it);
        if (it == L.end()) it = L.begin(); // 조건 추가, 예시에선 7이 지워지는 경우에 L.end() 가 반환될 것이고, 다시 첫 노드로 이동시켜줘야함
    }
    cout << '>';
}