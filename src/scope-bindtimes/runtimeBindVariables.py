# Author: Carter Roberts
# Institution: Loyola University New Orleans
# Instructor: Dr. Omar EL Khatib
# Filename: runtimeBindVariables.py
# Description: Tests changing a variable's type without casting to show how runtime
# variable binding allows fluid type redefinition for variables
# Date Created (MM/DD/YYYY): 12/9/2025 
# Date Modified (MM/DD/YYYY): 12/9/2025

x = 25
print(f"X as an integer = {x}")

# this & below doesn't cause a compiling error due to runtime variable binding
x = False
print(f"X as a bool = {x}")

# isn't just numeric-to-bool, can also become a string
x = "Good Afternoon, Madame!"
print(f"X as a string = {x}")

# create function to turn x into an instance of
def add2(numx):
    return numx + 2

# you can turn variables into instances of functions, too!
x = add2
# should print 32
print(f"X as a function of add2(30) = {add2(30)}")