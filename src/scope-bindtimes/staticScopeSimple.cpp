// Author: Carter Roberts
// Institution: Loyola University New Orleans
// Instructor: Dr. Omar EL Khatib
// Filename: staticScopeSimple.cpp
// Description: Uses a "show x" function and two other functions
// which call it after shadowing x to display static scope in C++
// Date Created (MM/DD/YYYY): 12/9/2025 
// Date Modified (MM/DD/YYYY): 12/9/2025

#include <iostream>
using namespace std;

// global definition for variable
int x = 25;

// function to display value of x
void show_x() {
    cout << "In show_x(), x = " << x << endl;
}

// function which tries to change x to 300 and print x, but x will print 25
void static1() {
    // different localized value for same variable
    int x = 300;
    show_x();
}

// function which tries to change x to 1 and print x, but x will print 25
void static2() {
    // different localized value for same variable
    int x = 1;
    show_x();
}

// calls both static scope display functions
int main() {
    static1();
    static2();
    return 0;
}