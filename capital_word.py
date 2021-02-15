word = str(input())

if (len(word) > 10000) or (word == ''):
    print(f'string length too big: {len(word)}')
    
first_letter = word[0].upper()

print(str(first_letter) + str(word[1:]))
