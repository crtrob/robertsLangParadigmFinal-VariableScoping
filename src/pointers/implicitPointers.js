// Author: Carter Roberts
// Institution: Loyola University New Orleans
// Instructor: Dr. Omar EL Khatib
// Filename: implicitPointers.js
// Description: Shows how pointers are implicit & understood underground in languages
// with run-time variable binding like JavaScript
// Date Created (MM/DD/YYYY): 12/9/2025 
// Date Modified (MM/DD/YYYY): 12/9/2025

// create object (array) variables designed to be pointed to
let xArr = [25, 35, 45];
let yArr = [100, 200, 300];

// create pointer object variable that uses xArr as reference 
ptrArr = xArr;

// add 55 to end of xArr through pointer
ptrArr.push(55);
// use yArr as reference in ptrArr instead
ptrArr = yArr;
// remove 200 from yArr through pointer
ptrArr.splice(1, 1)

// Show new values
console.log("xArr is now ", xArr, " instead of ", [25, 35, 45]);
console.log("yArr is now ", yArr, " instead of ", [100, 200, 300]);