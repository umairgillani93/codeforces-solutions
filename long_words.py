def long_words():
    n = int(input())
    new_words = []
    for _ in range(n):
        word = str(input()).lower()
        
        if len(word) > 10:
            word_ = str(word[0]) + str(len(word[1:-1])) + str(word[-1])
            new_words.append(word_)
        else:
            new_words.append(word)
                             
    for i in range(len(new_words)):
        print(new_words[i])
if __name__ == '__main__':
    long_words()
