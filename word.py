from collections import defaultdict

def word():
    word_ = str(input())
    
    char_dict = {'uppers': 0,
                'lowers': 0}
    
    for char in word_:
        if char.isupper() == True:
            char_dict['uppers'] += 1
        else:
            char_dict['lowers'] += 1
            
    if char_dict['uppers'] > char_dict['lowers']:
        return word_.upper()
    
    elif char_dict['uppers'] < char_dict['lowers']:
        return word_.lower()
    
    else:
        return word_.lower()

if __name__ == '__main__':
    print(word())
