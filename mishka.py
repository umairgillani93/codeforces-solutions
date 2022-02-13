import sys 

def main():
    n = int(input())
    scores = []

    for _ in range(n):
        a, b = [int(x) for x in input().split()]
        scores.append((a,b))

    #print(scores)
    
    mishka_count = 0
    chris_count = 0
    friends_count = 0

    for score in scores:
        if score[0] > score[1]:
            mishka_count += 1
        
        elif score[0] < score[1]:
            chris_count += 1

        else:
            friends_count += 1
            

            

    if mishka_count > chris_count:
        print('Mishka')
    
    elif mishka_count < chris_count:
        print('Chris')

    else:
        print('Friendship is magic!^^')
        

if __name__ == '__main__':
    main()
