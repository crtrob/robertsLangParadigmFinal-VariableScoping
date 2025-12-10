// Author: Carter Roberts
// Institution: Loyola University New Orleans
// Instructor: Dr. Omar EL Khatib
// Filename: nestedScope.cpp
// Description: Uses functions & variables to see what function space can access what in C++
// Date Created (MM/DD/YYYY): 12/9/2025 
// Date Modified (MM/DD/YYYY): 12/9/2025

#include <iostream>
using namespace std;

// global space; can access anything instantiated within itself
// global variable definition
int worldwide = 25;

// outer function; can access anything instantiated globally or within itself
void outer() {
    // variable from outer function
    int outside = 1998;
    // inner block; can access anything instantiated globally, within outer, or within itself
    {
        float inside = 0.0006;
        // all are accessible, since the inner function can access instances of all of these
        cout << "Access tests from within the inner function:" << endl;
        cout << "inside: " << inside << endl;
        cout << "outside: " << outside << endl;
        cout << "worldwide: " << worldwide << endl;
    }
    
    // all are accessible except inside, since there is no *specific instance* of inside within outer()
    cout << "Access tests from within the outer function:" << endl;
    // cout << "inside: " << inside << endl; // this line should cause run error if uncommented
    cout << "outside: " << outside << endl;
    cout << "worldwide: " << worldwide << endl;
}

// main space; can access anything instantiated globally or within itself
int main() {
    // main space has to call outer function for it to do its job in reality
    outer();
    // only worldwide is accessible, since there is no *specific instance* of outside or inside within 
    // main space & global space
    cout << "Access tests from within global space:" << endl;
    // cout << "inside: " << inside << endl; // this line should cause run error if uncommented
    // cout << "outside: " << outside << endl; // this line should cause run error if uncommented
    cout << "worldwide: " << worldwide << endl;
    return 0;
}