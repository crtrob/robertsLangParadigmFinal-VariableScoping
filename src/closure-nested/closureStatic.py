# Author: Carter Roberts
# Institution: Loyola University New Orleans
# Instructor: Dr. Omar EL Khatib
# Filename: closureStatic.py
# Description: Uses functions to display the sheer ease of closures in Python
# Date Created (MM/DD/YYYY): 12/9/2025 
# Date Modified (MM/DD/YYYY): 12/9/2025

# outer function of closure, which will have its variables remembered in inner function
def makeYforRedefX(x):
    # arbitrary equation to derive a new variable, y
    y = (x * 10.0) / 4.0
    print(f"Outer function produced y = {y}")
    # inner function of closure which remembers variables of x
    def redefX():
        # redefine x by having y added
        return x + y
    # outer function has to call & return result of inner function
    return redefX

# Make examples of closure
thirtyfive       = makeYforRedefX(x=35.0)
twelvepointeight = makeYforRedefX(x=12.8)

x35 = thirtyfive();
x12 = twelvepointeight();

print(f"Redefined x when x starts at 35 = {x35}")
print(f"Redefined x when x starts at 12 = {x12}")