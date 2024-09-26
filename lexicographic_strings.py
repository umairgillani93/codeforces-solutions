def lexicographic_string():
    
    string1 = str(input()).lower()
    string2 = str(input()).lower()
    
    if string1 < string2:
        return -1
    elif strin2 < string1:
        return 1
    else:
        return 0

if __name__ == '__main__':
    print(lexicographic_string())
