//
// Created by nicol on 2026-11-03.
//
#include <iostream>
#include <cmath>
using namespace std;


int main() {
    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(12);

    double sum = 0;
    double old = 10;
    int counter = 0;
    double tollerence = 0;

    cout<<"Enter a tollerence: ";
    cin>>tollerence;

    if(cin.fail() || tollerence >= 0.1 || tollerence <= 0) {
        return -1;
    }

    while(fabs(old-sum) > tollerence) {
        double add = 4/(2*static_cast<double>(counter) + 1);
        old = sum;
        if(counter % 2 != 0) {
            add *= -1;
        }
        sum += add;
        counter++;
        cout << counter-1 << "\t\t" << sum << '\n';
    }
}