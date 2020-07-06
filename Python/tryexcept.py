print('How many cats do you have?')
n = input()
try:
    if int((n)) < 5:
        print('Not many cats.')
    else:
        print('That is alot of cats, You need help')
except ValueError:
    print('You did not enter a numer, you are dumb.')