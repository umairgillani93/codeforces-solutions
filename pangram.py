def pangram(n, s):
    s = ''.join(sorted(s)).lower()

    s_ = 'abcdefghijklmnopqrstuvwxyz'

    for i in s_:
        if i in s:
            continue
        else:
            return 'NO'

    return 'YES'

if __name__ == '__main__':
    n = int(input())
    s = str(input())

    print(pangram(n, s))
