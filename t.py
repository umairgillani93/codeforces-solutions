def fact(n):
    if (n == 1 or n == 0):
        return 1

    return n * fact(n - 1)

if __name__ == '__main__':
    t = fact(5) / (fact(1) * fact(4))
    print(t)
