#include <iostream>
using namespace std;

int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int a, b, c;
    cin >> a >> b >> c;
    
    if(a == b && b == c) cout << 10000 + a * 1000;
    else if(a == b && b != c) cout << 1000 + a * 100;
    else if(a == c && a != b) cout << 1000 + a * 100;
    else if(b == c && a != c) cout << 1000 + b * 100;
    else if(a != b && a!= c && b != c) {
        int max = a;
        if(b > a && b > c) max = b;
        if(c > a && c > b) max = c;
        cout << max * 100;
    }
}