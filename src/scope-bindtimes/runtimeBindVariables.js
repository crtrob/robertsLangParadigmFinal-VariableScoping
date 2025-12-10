// Author: Carter Roberts
// Institution: Loyola University New Orleans
// Instructor: Dr. Omar EL Khatib
// Filename: runtimeBindVariables.js
// Description: Tests changing a variable's type without casting to show how runtime
// variable binding allows fluid type redefinition for variables
// Date Created (MM/DD/YYYY): 12/9/2025 
// Date Modified (MM/DD/YYYY): 12/9/2025

let x = 25;
console.log("X as an integer =", x);

// this & below doesn't cause a compiling error due to runtime variable binding
x = false;
console.log("X as a bool =", x);

// isn't just numeric-to-bool, can also become a string
x = "Good afternoon, madame";
console.log("X as a string =", x);

// create function to turn x into an instance of 
function add2(num1) {
  return num1 + 2;
}

// you can turn variables into instances of functions, too!
x = add2;
// should print 32!
console.log("X as a function of add2(30) =", x(30));