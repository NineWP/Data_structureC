#include<iostream>
using namespace std;
// insert number and change to a-z charactors
int main(){
    char ch[27];
    int num[23];

    for(int i = 1; i<27 ; i++){
        ch[i] = i+96;
        cout << ch[i];
    }

    for(int i = 1 ; i < 23 ; i++){
        cin >> num[i];
    }

    for(int i = 1 ; i<23 ; i++){
        cout << ch[num[i]];
    }
}