# team
def team():
    n = int(input())
    items = []
    ones_count = {}
    for _ in range(n):
        a, b, c = (int(x) for x in input().split())
        ints = [a, b, c]

        item = ''.join([str(x) for x in ints])
        items.append(item)

    count_ = 0
    for i in items:
        count = 0
        for j in i:
            j = int(j)
            if j == 1:
                count += 1
            else:
                continue

        if count >= 2:
            count_ += 1
        else:
            continue

    return count_

if __name__ == "__main__":
    print(team())
