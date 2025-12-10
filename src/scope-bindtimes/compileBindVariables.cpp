// Author: Carter Roberts
// Institution: Loyola University New Orleans
// Instructor: Dr. Omar EL Khatib
// Filename: compileBindVariables.cpp
// Description: Tests changing a variable's type without casting to show how compile-
// time variable binding limits redefinition of variables
// Date Created (MM/DD/YYYY): 12/9/2025 
// Date Modified (MM/DD/YYYY): 12/9/2025

#include <iostream>
using namespace std;

int main () {
    int x = 25;
    cout << "X as an integer: " << x << endl;
    
    // this line will cause a compiling error due to compile-time variable binding
    x = "Speaking from X Now";
    
    return 0;
}