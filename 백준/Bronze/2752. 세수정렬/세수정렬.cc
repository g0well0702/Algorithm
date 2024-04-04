#include <iostream>
using namespace std;

int main(){
    int a, b, c, t;
    cin >> a;
    cin >> b;
    cin >> c;
    if(a> b){
        t = a;
        a = b;
        b = t;
    }
    if(b>c){
        t = b;
        b=c;
        c=t;
    }
    if(a>b){
        t=a;
        a=b;
        b=t;
    }
    cout << a << " ";
    cout << b << " ";
    cout << c << " "; 
}