//
// Created by nicol on 2026-10-27.
//
#include<iostream>
using namespace std;


int main() {
    int input;
    unsigned int n = 1;
    cin>>input;

    if (cin.fail()||input < 0||input > 12) {
        return 1;
    }
    for (int i = 1; i <= input; i++) {
        n *= i;
    }
    cout<<"The factorial of " << input << " is "<<n<<"."<<endl;

    return 0;
}