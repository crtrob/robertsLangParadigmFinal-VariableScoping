// Author: Carter Roberts
// Institution: Loyola University New Orleans
// Instructor: Dr. Omar EL Khatib
// Filename: closureStatic.js
// Description: Uses functions to display the sheer ease of closures in JavaScript
// Date Created (MM/DD/YYYY): 12/9/2025 
// Date Modified (MM/DD/YYYY): 12/9/2025

// outer function of closure, which will have its variables remembered in inner function
function makeYforRedefX(x) {
  // arbitrary equation to derive a new variable, y
  let y = (x * 10.0) / 4.0;
  console.log("Outer function produced y = ", y);
  
  // inner function of closure which remembers variables of x  
  function redefX() {
    // redefine x by having y added
    return x + y;
  }
  
  // outer function has to call and return result of inner function
  return redefX;
}

// Make examples of closure
thirtyfive       = makeYforRedefX(35.0);
twelvepointeight = makeYforRedefX(12.8);

let x35 = thirtyfive();
let x12 = twelvepointeight();

console.log("Redefined x when x starts at 35 = ", x35);
console.log("Redefined x when x starts at 12.8 = ", x12);