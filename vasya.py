def main():
    n = int(input())
    scores = [int(x) for x in input().split()]
    scores.reverse() 
    print('Scores list: ', scores)
    

    count = 0

    for i in range(len(scores)):
        if (scores[i] > max(scores[i:len(scores)-1])) or (scores[i] < min(scores[i:len(scores)-1])):
            count += 1
            scores.pop(i)
        else:
            continue

    return count 


if __name__ == '__main__':
    print(main())
