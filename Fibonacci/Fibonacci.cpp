//
// Created by nicol on 2026-11-01.
//

#include <iostream>
using namespace std;

int main() {
    int old_num = 0;
    int new_num = 1;
    int input = 0;

    while (input != -1) {
        cout<<"Enter the fibonacci number: \n";
        old_num = 0;
        new_num = 1;
        do {
            cin>>input;
            if (cin.fail() || input < -1) {
                cout<<"Input error"<<endl;
                cin.clear();
                cin.ignore();
            }
        }while (cin.fail() || input < -1);
        if (input == -1) {
            break;
        }
        if (input != 0) {
            for (int i = 1; i < input; i++) {
                new_num += old_num;
                old_num = new_num - old_num;
            }
            cout<<new_num<<endl;
        }else {
            cout<<input<<endl;
        }


    }
    cout<<"Done";
}