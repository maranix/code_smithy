dict_first = {'One':1, 'Two':2, 'Three':3, 'Four':4, 'Five':5}
dict_second = {'Six':6, 'Seven':7, 'Eight':8, 'Nine':9, 'Ten':10}
dict_third = {}

for key in dict_first, dict_second:
    dict_third.update(key)

print(dict_third)