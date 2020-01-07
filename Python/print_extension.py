import sys

filename=input("Enter the file name: ")
extension=filename.split(".")

print("The extension is: " + repr(extension[-1]))