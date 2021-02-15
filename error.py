def error():
    n = int(input()) # number of orange containing drinks
    percents = [int(x) for x in input().split()]
    sum_ = 0
    for p in range(len(percents)):
        sum_ += percents[p] / 100
        

    return sum_ / n * 100


if __name__ == '__main__':
    print(error())
