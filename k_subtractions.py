def k_substractions():
    
    n, k = (int(x) for x in input().split())
    
    for i in range(k):
        if n > 0:
            if n % 10 == 0:
                n /= 10
            else:
                n -= 1
                
        else:
            return n
        
    return int(n)

if __name__ == '__main__':
    print(k_substractions())
