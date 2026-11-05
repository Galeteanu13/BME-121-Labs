

#include <iostream>
#include <math.h>
using namespace std;

double f(double x) {
    return exp(-x);
}
double derivitive(double x, double h) {
    return (f(x+h)-f(x-h))/(2*h);
}
int main() {
    double x, current, previous;
    double h = 0.2;
    do {
        cout << "Enter a x: "<<endl;
        cin >> x;
        if (cin.fail()) {
            cin.clear();
            cin.ignore();
            cout<<"Invalid try again"<<endl;
        }
    }while (cin.fail());
    if (x!=0) {
        h=abs(x)/5;
    }
    current = derivitive(x, h);
    previous = derivitive(x,h);
    do {
        previous = derivitive(x,h);
        h /= 2;
        current = derivitive(x, h);


    }while(h > abs(x)*0.0001 && (previous-current)/current > 0.001/100 );

    cout<<current<<endl;
}