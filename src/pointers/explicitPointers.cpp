// Author: Carter Roberts
// Institution: Loyola University New Orleans
// Instructor: Dr. Omar EL Khatib
// Filename: explicitPointers.cpp
// Description: Shows how pointers can be assigned & controlled directly in
// languages with compile-time binding like C++
// Date Created (MM/DD/YYYY): 12/9/2025 
// Date Modified (MM/DD/YYYY): 12/9/2025

#include <iostream>
using namespace std;

int main() {
    // create two variables designed to be pointed to
    int x = 25;
    int y = 300;
    
    // declare integer pointer
    int* xyptr;
    
    // connecting address of x to xyptr by using reference/& operator on x
    xyptr = &x;
    // change value of x to 1 by using dereference/* operator on pointer
    *xyptr = 1;
    // now reassign xyptr to address of y through reference/& operator
    xyptr = &y;
    // subtract 275 from y by using dereference/* operator on pointer
    *xyptr -= 275;
    
    // show new values
    cout << "x is now " << x << " instead of 25" << endl;
    cout << "y is now " << y << " instead of 300" << endl;
}