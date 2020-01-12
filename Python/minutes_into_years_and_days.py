def main(x):
    years=x/(365*24*60)
    days=(x/24/60)%365
    print("%d minutes is approximately" %x, "%d years and" %years ,"%d days" %days)

if __name__ == '__main__':
    print("Enter the number of minutes: ")
    minutes=int(input())
    main(minutes)