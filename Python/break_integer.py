def main(x):
    for i in range(len(x)):
        print(x[i], end =" ")
        i+=1

if __name__ == '__main__':
    print("Enter an integer")
    n=str(input())
    main(n)