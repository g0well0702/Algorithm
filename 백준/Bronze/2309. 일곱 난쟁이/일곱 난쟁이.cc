#include <iostream>
using namespace std;

int main(){
    int arr[9];
    int sum = 0;
    for(int i=0;i<9;i++){
        cin >> arr[i];
        sum += arr[i];
    }
    int t = 0;
    for(int i=0;i<8;i++){
        for(int j=1;j<9;j++){
            if(sum-(arr[i] + arr[j]) == 100){
                t= arr[i];
                arr[i] = arr[8];
                arr[8] = t;
                
                t= arr[j];
                arr[j] = arr[7];
                arr[7] = t;
            }
        }
    }
    int tmp = 0;
    for(int i = 6; i > 0; i--){
        for(int j = 0; j < i; j++){
            if(arr[j]> arr[j+1]){
                tmp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = tmp;
            }
        }
    }
    for(int i = 0; i < 7; i++){
        cout << arr[i] << '\n';
    }
}