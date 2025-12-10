# Author: Carter Roberts
# Institution: Loyola University New Orleans
# Instructor: Dr. Omar EL Khatib
# Filename: nestedScope.py
# Description: Uses functions and variables to see what function space can access what in Python
# Date Created (MM/DD/YYYY): 12/9/2025 
# Date Modified (MM/DD/YYYY): 12/9/2025

# global space; can access anything instantiated within itself
# global variable definition
worldwide = 25

# outer function; can access anything instantiated globally or within itself
def outer():
    # variable from outer function
    outside = 1998
    # inner function; can access anything instantiated globally, within outer, or within itself
    def inner():
        inside = 0.0006
        # all are accessible, since the inner function can access instances of all of these
        print("Access tests from within the inner function:")
        print(f"inside: {inside}")
        print(f"outside: {outside}")
        print(f"worldwide: {worldwide}")
    
    # outer function has to call inner function for it to do its job in reality
    inner()
    # all are accessible except inside, since there is no *specific instance* of inside within outer()
    print("Access tests from within the outer function:")
    # print(f"inside: {inside}") # this line should cause run error if uncommented
    print(f"outside: {outside}")
    print(f"worldwide: {worldwide}")

# global space has to call outer function for it to do its job in reality
outer()
# only worldwide is accessible, since there is no *specific instance* of outside or inside within global
# space
print("Access tests from within global space:")
# print(f"inside: {inside}") # this line should cause run error if uncommented
# print(f"outside: {outside}") # this line should cause run error if uncommented
print(f"worldwide: {worldwide}")