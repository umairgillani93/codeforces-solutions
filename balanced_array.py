import random 

n = 10 
mid = n // 2 
evens = set()
odds = set()

while True:

    for i in range(mid):
        even_num = random.randint(0, 100)
        while True:
            if even_num % 2 == 0:
                evens.add(even_num)
                break
            else:
                even_num = random.randint(0, 100)

    for j in range(mid):
        odd_num = random.randint(0, 100)
        while True:
            if odd_num % 2 != 0:
                odds.add(odd_num)
                break 
            else:
                odd_num = random.randint(0, 100)

    final_arr = [int(x) for x in evens] + [int(y) for y in odds]
    print(final_arr)

    if sum(final_arr[:mid]) == sum(final_arr[mid:]):
        print('Array is balanced')
        print('Final array: ', final_arr)

        break 

    else:
        print('Process continued..')
        continue