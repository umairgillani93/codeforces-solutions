t = int(input())
main = []

for _ in range(t):
    n, k = [x for x in input().split()]
    arr = [int(x) for x in input().split()]
    arr = sorted(arr)
    main.append(arr)
    print(arr)

    if (arr[0] + arr[1]) > max(arr):
    #    arr.pop()

    #else:
    #    arr.remove(min(arr))
    #    arr.remove(min(arr))

    #print(sum(arr))




for i in range(len(main)):
    print(main[i])

