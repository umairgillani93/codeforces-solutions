def main(r,b):
    """vasya hipster challenge"
    low = min(int(r), int(b))
    high = max(int(r), int(b))

    if low == high:
        print(low, 0)

    high = high - low
    if high > 1:
        print(low, high//2)

    if high == 1:
        print(low, high-1)

if __name__ == '__main__':
    red, blue = (int(x) for x in input.split())
    main(red, blue)
