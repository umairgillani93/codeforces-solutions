def dominos():
    m, n = (int(x) for x in input().split())
    
    return (m * n) // 2

if __name__ == '__main__':
    print(dominos())
