#include <iostream>
using namespace std;

string s1[1000];
string s2[1000];
int freq1[26];
int freq2[26];

int can_strfry(string first, string second) {
    int count = 0;
    if (first.length() != second.length() || first.length() < 0 || second.length() < 0) return 0;
    for (int i = 0; i < first.length(); i++) {
        freq1[first[i] - 'a']++;
    }
    for (int i = 0; i < second.length(); i++) {
        freq2[second[i] - 'a']++;
    }
    for (int i = 0; i < 26; i++) {
        if (freq1[i] != freq2[i]) count++;
    }
    if (count == 0) return 1;
    return 0;
}

int main() {
    ios::sync_with_stdio(0), cin.tie(0);
    int n = 0;
    cin >> n;
    if (n < 0 || n > 1001) return 0;
    for (int i = 0; i < n; i++) {
        cin >> s1[i] >> s2[i];
    }
    for (int i = 0; i < n; i++) {
        if (can_strfry(s1[i], s2[i])) cout << "Possible" << '\n';
        else cout << "Impossible" << '\n';
        
        fill(freq1, freq1+26, 0);
        fill(freq2, freq2+26, 0);
    }
    return 0;
}