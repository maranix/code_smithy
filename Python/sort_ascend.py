arr = []
temp = 0

arr_size=int(input("Enter the size of list a: "))

for i in range(arr_size):
    a=input("Input the elements of list a: ")
    arr.append(a)

print("Elements of original array: ")   
for i in range(0, len(arr)):
    print(arr[i], end=" ")    
     
for i in range(0, len(arr)):    
    for j in range(i+1, len(arr)):    
        if(arr[i] > arr[j]):    
            temp = arr[i]
            arr[i] = arr[j]    
            arr[j] = temp    
     
print()    
     
print("Elements of array sorted in ascending order: ")    
for i in range(0, len(arr)):    
    print(arr[i], end=" ")
    
print()