// Author: Carter Roberts
// Institution: Loyola University New Orleans
// Instructor: Dr. Omar EL Khatib
// Filename: closureStatic.cpp
// Description: Uses functional library & lambda functions to create a basic closure showing
// how static scope languages like C++ handle closures
// Date Created (MM/DD/YYYY): 12/9/2025 
// Date Modified (MM/DD/YYYY): 12/9/2025

#include <iostream>
#include <functional>
using namespace std;

int main () {
    // create variable to be saved & modified by closure
    int x = 25;
    
    // lambda function producing a closure which reads x by value, i.e copying
    auto x_val = [x]() {
        cout << "x as read by lambda-by-value function: " << x << endl;
        // this line, uncommented, doesn't work, because x is copied by reading by value
        // x++
    };
    
    // lambda function producing a closure which reads x by reference & redefines x
    auto x_redefRef = [&x]() {
        cout << "x as read by lambda-redefine-by-reference function: " << x << endl;
        // redefines x through closure
        x = 395;
        cout << "x as read by lambda-redefine-by-reference function after redefinition: " 
             << x << endl;
    };
    
    // lambda function producing a closure which reads x by value, and because of being 
    // "mutable", actually modifies the copied by-value x; this means it doesn't change
    // the one defined at the start of main()
    function<void()> x_redefVar_mute = [x]() mutable {
        cout << "x as read by lambda-redefine-by-value-mutable function: " << x << endl;
        x = 15;
        cout << "x as read by lambda-redefine-by-value-mutable function after redefinition: " 
        << x << endl;
    };
    
    // actually call lambda functions and then check main() x to see the changes
    x_val();
    cout << "main() x after lambda-by-value is called: " << x << endl;
    x_redefRef();
    cout << "main() x after lambda-redefine-by-reference is called: " << x << endl;
    x_redefVar_mute();
    cout << "main() x after lambda-redefine-by-value-mutable is called: " << x << endl;
    
    return 0;
}