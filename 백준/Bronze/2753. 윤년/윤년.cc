#include <iostream>
using namespace std;

int func1(int n){
    if((n %4 == 0 && n%100 != 0) ||(n%4==0 && n%400 == 0)) return 1;
    else return 0;
}

int main(){
    int n = 0;
    cin >> n;
    cout << func1(n);
}