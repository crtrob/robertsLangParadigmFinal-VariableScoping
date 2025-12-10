# Author: Carter Roberts
# Institution: Loyola University New Orleans
# Instructor: Dr. Omar EL Khatib
# Filename: staticShadowing.py
# Description: Displays shadowing of global variable inside function
# Date Created (MM/DD/YYYY): 12/9/2025 
# Date Modified (MM/DD/YYYY): 12/9/2025

# global definition for variable
x = 25

# function for making a shadowed x
def second():
    x = 95
    print(f"Local, shadowing x = {x}")

# actually run the function
second()
# show global x
print(f"Global, shadowed x = {x}")
