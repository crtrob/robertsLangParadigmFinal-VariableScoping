// Author: Carter Roberts
// Institution: Loyola University New Orleans
// Instructor: Dr. Omar EL Khatib
// Filename: staticShadowing.cpp
// Description: Displays shadowing of global variable inside function using
// scope resolution operator
// Date Created (MM/DD/YYYY): 12/9/2025 
// Date Modified (MM/DD/YYYY): 12/9/2025

#include <iostream>
using namespace std;

// global definition for variable
int x = 25;

int main () {
    // shadow that variable inside main
    int x = 95;
    // shows both versions of x
    cout << "Local, shadowing x: " << x << endl;
    // scope resolution operator to specify global, shadowed version instead
    cout << "Global, shadowed x: " << ::x << endl;
    return 0;
}