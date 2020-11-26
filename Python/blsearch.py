def bsearch(a,x):
    lower_b = 0
    uppper_b = len(a) - 1

    while lower_b <= uppper_b:
        i = (lower_b + uppper_b)//2
        if a[i] == x:
            return i
        else:
            if a[i] < x:
                lower_b =i + 1
            else:
                uppper_b = i - 1
    return-1

def lsearch(a,x):
    for i in range(len(a)):
        if a[i] == x:
            return i
    return-1

a = ['1','2','3','4','5','6','7','8','9']
search = input("Input the number you want to search for: ")

choice = input("Which search do you want to perform?\n1. Binary\n2. Linear\n")
if choice == 1:
    print("Number exists at index "+str(bsearch(a,search)))
else :
    print("Number exists at index "+str(lsearch(a,search)))