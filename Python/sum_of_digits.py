def main(x):
    total=0

    if x in range(1000):
        while x!=0:
            d=x%10
            total=total+d
            x=x/10
    else:
        print("Input integer is out of range.......")

    print("Sum of digits: %d" %total)

if __name__ == '__main__':
    print("Enter an integer between 0-1000")
    n=int(input())
    main(n)