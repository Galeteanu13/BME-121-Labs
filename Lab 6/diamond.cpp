//
// Created by nicol on 2026-11-03.
//

#include <iostream>
using namespace std;

int main() {
    int size;
    cout<<"Enter a number: ";
    cin>>size;

     if (cin.fail() || size%2 == 0 || size<1 || size > 20) {
        return 1;
    }

    for (int i=0; i<size; i++) {
        int stars = 2*i+1;
        int spaces = -(stars - size)/2;

        if(stars>size) {
            spaces = i - (size/2);
            stars = size - 2*spaces;
        }
        for(int j = 0; j<spaces; j++) {
                cout<<" ";
            }
            for(int j = 0; j<stars; j++) {
                cout<<"*";
            }
        cout<<endl;
    }
}