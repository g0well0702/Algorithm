#include <iostream>
using namespace std;

int main(){
    int arr[7];
    int buf, index = 0;
    for(int i = 0; i < 7; i++){
        cin >> buf;
        if(buf % 2 == 1){
            arr[index] = buf;
            index++;
        }
    }
    int min = arr[0];
    int sum = 0;
    for(int i =0; i < index; i++){
        if(min > arr[i]) min = arr[i];
        sum += arr[i];
    }
    if(sum == 0) cout << -1;
    else{
        cout << sum << '\n';
        cout << min;
    }
}