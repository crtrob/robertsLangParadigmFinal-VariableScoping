// Author: Carter Roberts
// Institution: Loyola University New Orleans
// Instructor: Dr. Omar EL Khatib
// Filename: nestedScope.js
// Description: Uses functions and variables to see what function space can access what in JavaScript
// Date Created (MM/DD/YYYY): 12/9/2025 
// Date Modified (MM/DD/YYYY): 12/9/2025

// global space; can access anything instantiated within itself
// global variable definition
let worldwide = 25;

// outer function; can access anything instantiated globally or within itself
function outer() {
    // variable from outer function
    let outside = 1998;
    // inner function; can access anything instantiated globally, within outer, or within itself
    function inner() {
        let inside = 0.0006;
        // all are accessible, since the inner function can access instances of all of these
        console.log("Access tests from within the inner function:");
        console.log("inside: ", inside);
        console.log("outside: ", outside);
        console.log("worldwide: ", worldwide);
    }
    
    // outer function has to call inner function for it to do its job in reality
    inner();
    // all are accessible except inside, since there is no *specific instance* of inside within outer()
    console.log("Access tests from within the outer function:");
    // console.log("inside: ", inside); // this line should cause run error if uncommented
    console.log("outside: ", outside);
    console.log("worldwide: ", worldwide);
}

// global space has to call outer function for it to do its job in reality
outer();
// only worldwide is accessible, since there is no *specific instance* of outside or inside within global
// space
console.log("Access tests from within global space:");
// console.log("inside: ", inside); // this line should cause run error if uncommented
// console.log("outside: ", outside); // this line should cause run error if uncommented
console.log("worldwide: ", worldwide);