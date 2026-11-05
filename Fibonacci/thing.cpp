//
// Created by nicol on 2026-11-02.
//


#include <iostream>
#include <ostream>
using namespace std;

int main() {
   int a = 3, b = 5 , c = 10;
   while (a++<6&&b-->3||c-->8){
      cout<<a<<" "<<b<<" "<<c<<endl;
   }
   cout<<a<<" "<<b<<" "<<c << " DONE " << endl;

}
