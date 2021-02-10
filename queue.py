def find_indexes(s):
    indexes = []
    for i in range(len(s)-1):
        if s[i] == 'B' and s[i+1] == 'G':
            indexes.append(i)
            
        else:
            continue
            
    return indexes



def queue():
    n, t = [int(x) for x in input().split()]
    string = str(input())
    
    string_ = [str(x) for x in string]
    
    idxx = find_indexes(string_)
    
    count = 0
    while count < t:
        for j in idxx:
            string_[j], string_[j+1] = string_[j+1], string_[j]
        
        idxx = find_indexes(string_)
        
        count += 1
        
    return ''.join(string_)
            
            

if __name__ == '__main__':
    print(queue())
