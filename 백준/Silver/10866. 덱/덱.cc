#include <bits/stdc++.h>
using namespace std;

const int MX = 1000005;
int head = MX, tail = MX;

void push_front(int data[], int x){
    head--;
    data[head] = x;
}

void push_back(int data[], int x){
    data[tail] = x;
    tail++;
}

int pop_front(int data[]){
    if(head == tail) return -1;
    else{
        int tmp = data[head];
        head++;
        return tmp;
    }
}

int pop_back(int data[]){
    if(head == tail) return -1;
    else{
        tail--;
        return data[tail];
    }
}
int size(){
    return tail-head;
}

int empty(){
    if(head == tail) return 1;
    else return 0;
}

int front(int data[]){
    if(head == tail) return -1;
    else return data[head];
}

int back(int data[]){
    if(head == tail) return -1;
    else return data[tail-1];
}

int main(void){
    ios::sync_with_stdio(0), cin.tie(0);
    
    int data[2*MX+1] = {0};
    
    int n;
    cin >> n;
    while(n--){
        string s;
        cin >> s;
        if(s == "push_front"){
            int x;
            cin >> x;
            push_front(data, x);
        }
        else if(s== "push_back"){
            int x;
            cin >> x;
            push_back(data, x);
        }
        else if(s== "pop_front") cout << pop_front(data) << '\n';
        else if(s== "pop_back") cout << pop_back(data) << '\n';
        else if(s== "size") cout << size() << '\n';
        else if(s== "empty") cout << empty() << '\n';
        else if(s== "front") cout << front(data) << '\n';
        else if(s== "back") cout << back(data) << '\n';
    }
}