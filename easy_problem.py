def easy_problem():
    n = int(input())
    answers = []

    answers = [int(x) for x in input().split()]

    if 1 in answers:
        return 'HARD'

    return 'EASY'

if __name__ == '__main__':
    print(easy_problem())
