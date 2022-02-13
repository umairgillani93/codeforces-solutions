def main():
    n = int(input())
    nums = [int(x) for x in input().split()]
    is_round = False

    for num in range(len(nums)):
        rem = nums[num]%10
        quotient = nums[num] // 10
        if (rem == 0 and quotient%10 == 0) or (nums[num] < 10 and nums[num] != 0):
            is_round = True
            print("num: {}: {}".format(nums[num], is_round))

        else:
            print('Not round')
print(main())
