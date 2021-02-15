def tram():
    stops = int(input())
    
    total = []
    exist, enter = [int(x) for x in input().split()]
    
    total.append((exist + enter))
    
    i = total[0]
    
    for stop in range(stops-1):
        exit, enter = [int(x) for x in input().split()]
        i = i - exit + enter
        total.append(i)
        
    return max(total)
        
if __name__ == '__main__':
    print(tram())
