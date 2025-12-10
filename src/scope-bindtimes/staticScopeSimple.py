# Author: Carter Roberts
# Institution: Loyola University New Orleans
# Instructor: Dr. Omar EL Khatib
# Filename: staticScopeSimple.py
# Description: Uses a "show x" function and two other functions
# which call it after redefining x to display static scope in Python
# Date Created (MM/DD/YYYY): 12/9/2025 
# Date Modified (MM/DD/YYYY): 12/9/2025

# global definition for variable
x = 25

# function to display value of x
def show_x():
    print(f"In show_x(), x = {x}")


# function which tries to change x to 300 and print x, but x will print 25
def static1():
    x = 300
    show_x()


# function which tries to change x to 1 and print x, but x will print 25
def static2():
    x = 1
    show_x()


# calls both static scope display functions
static1()
static2()