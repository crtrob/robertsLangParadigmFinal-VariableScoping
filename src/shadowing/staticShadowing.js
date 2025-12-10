// Author: Carter Roberts
// Institution: Loyola University New Orleans
// Instructor: Dr. Omar EL Khatib
// Filename: staticShadowing.js
// Description: Displays shadowing of global variable inside function
// Date Created (MM/DD/YYYY): 12/9/2025 
// Date Modified (MM/DD/YYYY): 12/9/2025

// global definition for variable
let x = 25;

// function for creating a shadow x
function second() {
  let x = 95;
  console.log("Local, shadowing x = ", x);
}

// actually run the function
second();
// show global x
console.log("Global, shadowed x = ", x);