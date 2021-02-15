def magnets():
    n = int(input())
    sequence = []
    for i in range(n):
        n_ = str(input())
        sequence.append(n_)

    
    idx = 0
    count = 0
    while idx < len(sequence)-1:
        if sequence[idx] == sequence[idx+1]:
            idx += 1
        else:
            count += 1
            idx += 1
    
    return count+1 

if __name__ == '__main__':
    print(magnets())
