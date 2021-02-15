def elephant_visit():
    friend_house = int(input())
    
    if friend_house <= 5:
        return 1 
    elif friend_house % 5 == 0:
        return friend_house // 5
    else:
        return friend_house // 5 + 1
    
if __name__ == '__main__':
    print(elephant_visit())
