def general_arrival():
    soldiers = int(input())
    order = [int(x) for x in input().split()]

    max_num = max(order)
    min_num = min(order)
    LENGTH = len(order)
    SWAPS = 0
    min_index = 0
    max_index = 0

    for i in range(len(order)):
        if order[i] == min_num:
            min_index = i
        elif order[i] == max_num:
            max_index = i

        else:
            continue
    if (max_index - 0) == 1 and (len(order)-1 - (min_num)) == 1:
        print('IF EXECUTED')
        SWAPS += max_index - 0
        SWAPS += (len(order)-1) - (min_index)

    else:
        print('ELSE EXECUTED')
        SWAPS += max_index - 0
        SWAPS += (len(order)-2) - (min_index)

    return SWAPS




if __name__ == '__main__':
    print(general_arrival())


