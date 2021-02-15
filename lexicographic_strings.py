def lexicographic_string():
    
    string1 = str(input()).lower()
    string2 = str(input()).lower()
    
    if len(string1) == len(string2):

        lexo_dict = {}
        count = 0
        alphabets = 'abcdefghijklmnopqrstuvwxyz'.lower()

        while count < len(alphabets):
            lexo_dict[alphabets[count]] = count
            count += 1
            
        strings_list = list(zip(string1, string2))
        
        for val in strings_list:
            if lexo_dict[val[0]] > lexo_dict[val[1]]:
                return 1
            elif lexo_dict[val[1]] > lexo_dict[val[0]]:
                return -1
            
            else:
                continue
                
        return 0
        
    else:
        return 'string lengths are not same!'

if __name__ == '__main__':
    print(lexicographic_string())
