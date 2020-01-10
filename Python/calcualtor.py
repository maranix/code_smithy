import re

print("\nCalculator:-")
print("\nType 'q' to exit from the calculator process.")
print("\nType 'c' to clear current running process.\n\n")
previous = 0
run = True

def math():
    global run
    global previous
    equation=""

    if previous == 0:
        equation=input("Enter equation: ")
    else:
        equation=input(str(previous))

    if equation == 'q':
        run = False
        print("Quitting.")
    elif equation == 'c':
            previous = 0
            print("Cleaned.")
    else:
        equation=re.sub('[a-zA-z,.():" "]', '', equation)
        if previous == 0:
            previous=eval(equation)
        else:
            previous=eval(str(previous) + equation)

while run:
    math()