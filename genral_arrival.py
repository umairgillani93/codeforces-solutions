def solve(n, heights):

    maxVal = heights[0]
    maxValIdx = 0
    minVal = heights[n-1]
    minValIdx = n-1

    for i in range(0, n):
        if heights[i] > maxVal:
            maxVal = heights[i]
            maxValIdx = i

        if heights[i] <= minVal:
            minVal = heights[i]
            minValIdx = i

    swaps = maxValIdx
    swaps += (n - 1) - minValIdx

    if maxValIdx > minValIdx:
        swaps -= 1

    return swaps


if __name__ == "__main__":

    n = int(input())
    heights = [int(x) for x in input().split()]
    print (solve(n, heights))

