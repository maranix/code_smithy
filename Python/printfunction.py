"""
Task
Read an integer N.

Without using any string methods, try to print the following:
1,2,3,....,N.

Note that "......" represents the values in between.
"""

def main():
    print(*range(1, int(input()) + 1), sep='')

main()