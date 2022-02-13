def main(events):
    n = int(input())
    crimes= [int(x) for x in input().split()]

    count = 0

    for i in range(len(crimes)):
        if crimes[i] == -1:
            count += 1

        else:
            if int(i) == int(len(crimes) -1):
                break
            else:
                for j in range(crimes[i]):
                    count -= 1
    
    return abs(count) 
if __name__ == '__main__':
    print(main(3))

