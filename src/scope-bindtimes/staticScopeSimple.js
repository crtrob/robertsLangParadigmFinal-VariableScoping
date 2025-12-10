// Author: Carter Roberts
// Institution: Loyola University New Orleans
// Instructor: Dr. Omar EL Khatib
// Filename: staticScopeSimple.js
// Description: Uses a "show x" function and two other functions
// which call it after redefining x to display static scope in JavaScript
// Date Created (MM/DD/YYYY): 12/9/2025 
// Date Modified (MM/DD/YYYY): 12/9/2025

// global definition for variable
let x = 25;

// function to display value of x
function show_x() {
  console.log("In show_x(), x =", x);
}

// function which tries to change x to 300 and print x, but x will print 25
function static1() {
  let x = 300;
  show_x();
}

// function which tries to change x to 1 and print x, but x will print 25
function static2() {
  let x = 1;
  show_x();
}

// calls both static scope display functions
static1();
static2();