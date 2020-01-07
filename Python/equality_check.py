"""
In this challenge, you must verify the equality of two different given parameters: a and b.

Both the value and the type of parameters need to be tested in order to have an matching equality.

Examples:
check_equality(1, True) ➞ False
# A number and a boolean: their type is different

check_equality(0, "0") ➞ False
# A number and a string: their type is different

check_equality(1,  1) ➞ True
# A number and a number: their type and value are equal

"""

def equal():
    a=input()
    b=input()
    if type(a) == type(b) and a == b:
        print(True)
    else:
        print(False)

equal()