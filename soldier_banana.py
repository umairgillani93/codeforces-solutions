def soldier_banana():
    k, n, w = map(int,input().split())

    total_amt = 0

    for c in range(1, w+1):
        total_amt += c * k

    borrow_amt = total_amt - n

    if n >= total_amt:
        borrow_amt = 0
        print(borrow_amt)

    else:
        print(total_amt - n)
        
if __name__ == '__main__':
    soldier_banana()
