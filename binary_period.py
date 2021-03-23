import numpy as np 

def binary_period(number):
    zeros = [0] * 30
    idx = 0 
    while number > 0:
        zeros[idx] = number % 2 
        number //= 2
        idx += 1 
    for c in range(1, 1+idx):
        check = True
        for i in range(idx-c):
            if zeros[i] != zeros[i+c]:
                check = False 
                break 
            
        if check:
            return c 
            
    return -1

    
if __name__ == '__main__':
    print(binary_period(955))
