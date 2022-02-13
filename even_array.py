def main():
    n = int(input())
    sizes = []
    arrays = []
    for _ in range(n):
        sizes.append(int(input()))
        arrays.append([int(x) for x in input().split()])

    print('sizes: {}'.format(sizes))
    print('arrays: {}'.format(arrays))
    
    sp = 0
    dp = 0

    for array in arrays:
        for i in range(len(array)):
            if i%2 == array[i]%2:
                sp +=1
            else:
                dp += 1

        print('same parity: {}'.format(sp))
        print('different parity: {}'.format(dp))


print(main())
