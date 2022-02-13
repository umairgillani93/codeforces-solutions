def main():
    n = int(input())
    rect_sizes = []
    
    for _ in range(n):
        a,b = [int(x) for x in input().split()]
        rect_sizes.append((a,b))


    print(rect_sizes)


if __name__ == '__main__':
    print(main())
