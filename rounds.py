def main(arr):
    for i in range(len(arr)-1):
        if abs(arr[i]- arr[i+1]) <= 1:
            arr.pop(i)
        else:
            continue

    return len(arr) == 1

print(main([1,2,1]))
