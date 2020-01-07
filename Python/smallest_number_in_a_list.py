def small():
    lst = []
    x=int(input("Enter the size of the list: "))
    for i in range(x):
        a=int(input("Enter the elements of the list: "))
        lst.append(a)
    print(("Smallest number in the list: "), min(lst))

small()