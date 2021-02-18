def wanna_be():
    levels = int(input())
    little_x = [int(x) for x in input().split()]
    little_y = [int(y) for y in input().split()]
    
    nums = []

    for i in little_x[1:]:
        if i in nums:
            continue
        else:
            nums.append(i)

    for j in little_y[1:]:
        if j in nums:
            continue
        else:
            nums.append(j)
    

    if sorted(list(range(1, levels+1))) == sorted(nums):
        return 'I become the guy.'

    return 'Oh, my keyboard!'


if __name__ == '__main__':
    print(wanna_be())
    


