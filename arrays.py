def main():
    n = int(input())
    outer_cases = []
    outer_m = []
    for _ in range(n):
        outer_m.append(int(input()))
        outer_cases.append([int(x) for x in input().split()])

    

    for i in outer_cases:
        for j in range(len(i)-1):
            if abs(i[j+1] - i[j]) <= 1:
                continue
            else:
                print('NO')
                break

        print('YES')
        

if __name__ == '__main__':
    print(main())
