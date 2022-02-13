def zip_them(l1, l2):
    new_list = []
    for i in range(len(l1)):
        new_list.append([l1[i], l2[i]])

    return new_list 

def reverse_zip(l):
    l1 = []
    l2 = []
    for i in range(len(l)):
        l1.append(l[i][0])
        l2.append(l[i][1])

    return (l1, l2)


def main():
    n = int(input())
    sizes = []
    l1 = []
    l2 = []

    for _ in range(n):
        sizes.append(int(input()))
        l1.append([int(x) for x in input().split()])
        l2.append([int(x) for x in input().split()])


    for i in range(len(l1)):
        final = zip_them(l1[i], l2[i])

        min_l1 = min(l1[i])
        min_l2 = min(l2[i])
        cnt = 0

        while True:
            if (final[i][0] > min_l1) and (final[i][1] > min_l2):
                final[i][0] -= 1
                final[i][1] -= 1
                cnt += 1

            elif (final[i][0] > min_l1):
                final[i][0] -= 1
                cnt += 1

            elif (final[i][1] > min_l2):
                final[i][1] -= 1
                cnt += 1 

            else:
                print("count: {}".format(cnt))
                print(reverse_zip(final))
                break

if __name__ == '__main__':
    main()
            
