"""
Task
Read two integers and print two lines. The first line should contain integer division, a // b . The second line should contain float division, a / b.

You don't need to perform any rounding or formatting operations.
"""

import sys

print("Enter two integers a and b: ") #Show a message to the user for inputting two integers
a=int(input())  # Take input from the user
b=int(input())  # Take input from the user

print(a//b) # Calculate the integer division and display the output
print(a/b)  # Calculate the float divison and display the output

