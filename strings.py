def all_same(s):
    for c in range(len(s)-1)):
        if s[c] != s[c+1]:
            return False
        else:
            continue

    return True

def main():
    s = str(input())
    new_s = ''
    
    if all_same(s):
        return len(s)-1
    
    for c in range(len(s)-1):
        if s[c] == s[c+1]:
            continue
        else:
            new_s += s[c]


        
    if s[-2] != s[-1]:
        last = s[-1]
        return new_s + last
    else:
        return new_s
    
    

if __name__ == '__main__':
    print(main())

