def main():
    s = str(input())
    if (len(s) > 100) or (s == ''):
        print('wrong string: %s' %string)
        
    else:
        new_string = []
        
        for char in s:
            if char in new_string:
                continue 
            else:
                new_string.append(char)
                
        if len(new_string) % 2 == 0:
            print('CHAT WITH HER!')
        else:
            print('IGNORE HIM!')
        
if __name__ == '__main__':
    main()
