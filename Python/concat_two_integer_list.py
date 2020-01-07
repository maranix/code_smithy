def concat():
    lst_a = []
    lst_b = []
    lst_c = []

    lst_a_size=int(input("Enter the size of list a: "))
    lst_b_size=int(input("Enter the size of list b: "))

    for i in range(lst_a_size):
        a=input("Input the elements of list a: ")
        lst_a.append(a)

    for i in range(lst_b_size):
        b=input("Input the elements of list b: ")
        lst_b.append(b)
    
    lst_c=lst_a+lst_b

    print(lst_c)

concat()