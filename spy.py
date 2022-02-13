def main():

    n = int(input())
    sizes = []
    arrs = []

    for _ in range(n):
        sizes.append(int(input()))
        arrs.append([int(x) for x in input().split()])

    #print('Sizes: {}'.format(sizes))
    #print("arrays => ", (arrays))

        
    for arr in arrs:
        num_hash = {}
        for i in range(len(arr)):
            if arr[i] in num_hash.keys():
                num_hash[arr[i]] += 1

            else:
                num_hash[arr[i]] = 1

        #print(num_hash)
        #print("\n")

        for k in num_hash.keys():
            if num_hash[k] == 1:
                print(f'{arr.index(k)+1}')
            else:
                continue


if __name__ == '__main__':
    main()

