# Author: Carter Roberts
# Institution: Loyola University New Orleans
# Instructor: Dr. Omar EL Khatib
# Filename: implicitPointers.py
# Description: Shows how pointers are implicit & understood underground in languages
# with run-time variable binding like Python
# Date Created (MM/DD/YYYY): 12/9/2025 
# Date Modified (MM/DD/YYYY): 12/9/2025

# create object (list) variables designed to be pointed to
xList = [25, 35, 45]
yList = [100, 200, 300]

# create pointer object variable that uses xList as reference
ptrList = xList

# add 55 to end of xList through pointer
ptrList.append(55)
# use yList as reference in ptrList instead
ptrList = yList
# remove 200 from yList through pointer
ptrList.remove(200)

# Show new values 
print(f"xList is now {xList} instead of {[25, 35, 45]}")
print(f"yList is now {yList} instead of {[100, 200, 300]}")