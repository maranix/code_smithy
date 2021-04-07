"""

TODO: OOP implementation or something, idk.

"""
def elementSequentialSearch(l, search):
    for i in l:
        if i==search:
            found = True
        
    if (found):
        return ("{} found in list.".format(search))
    else:
        return ("{} not found in list.".format(search))

def indexSequentialSearch(l, search):
    for i in range(0,len(l)):
        if l[i]==search:
            found = True
        
    if (found):
        return ("{} found in list.".format(search))
    else:
        return ("{} not found in list.".format(search))

def main():
    list = []
    print("Enter integer elements in list.")
    print("Press q to stop entering numbers.")
    while(True):
        i = input()
        if(i == 'q'):
            break
        list.append(i)

    n = input("Enter a number to search in list: ")
    print(elementSequentialSearch(list,n))

main()
