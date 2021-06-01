def main(red, blue):
    if blue == 1:
        a = min(red, blue)
        b = max(red, blue) // 2

    elif blue > 1:
        a = min(red, blue)
        b = max(red, blue)//2  -1

    elif red == blue:
        a = a
        b = 0
    return a, b
if __name__ == '__main__':
    r, b = [int(x) for x in input().split()]
    result = main(r,b)
    print(result[0], result[1])
