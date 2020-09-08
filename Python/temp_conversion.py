def main(x):
    x=(5*(x-32)/9)  

    print("%.2f degree celsius."%x)

if __name__ == "__main__":
    print("Input a degree in Fahrenheit: ")
    x=float(input())
    main(x)

""" Whole program written in 3 lines xD

print("Input a degree in Fahrenheit: ")
temp_input = float(input())
print("%d degree Fahrenheit is equal to" %temp_input, (5*(temp_input-32)/9), "degree in celsius.")

"""