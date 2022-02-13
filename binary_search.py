def bin_search(arr, num):
    if len(arr) > 1:
        arr.sort()
        print('array: {}'.format(arr))

        mid = len(arr)//2
        left = arr[:mid]
        right = arr[mid:]

        if num < arr[mid]:
            count = 0
            while count < len(left):
                if lef[count] == num:
                    print('Found')
                    break
                else:
                    count += 1

        else:
            count = 0
            while count < len(right):
                if right[count] == num:
                    print('Found')
                    break

                else:
                    count += 1

if __name__ == "__main__":
    print(bin_search([3,4,5,2,3,1], 1)





        
