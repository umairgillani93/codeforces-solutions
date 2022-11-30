import os 
import itertools

def all_pairs(n):
    '''
    returns all sum pairs of passed number
    '''
    perms = list(itertools.combinations(range(n), 2))
    print(perms)
    v_perms = []
    for x in perms:
        if x[0] + x[1] == n:
            v_perms.append(x)
        else:
            continue
    
    return v_perms 
           
def lcm(x, y):
   '''
   returns least-common-multiple of both 'x' 
   and 'y'
   '''
   for i in range(2, 11):
       if x % i == 0 and y % i == 0:
           return i
       else:
           continue

assert lcm(10, 15) == 5

def sol():
    n = int(input())
    combs = []
    for x in list(itertools.combinations(range(n), 2)):
        if x[0] + x[1] == n:
            combs.append(x)
        else:
            continue

    print(f'\ncombs: {combs}')

    for j in range(len(combs)):
        lcm_ = lcm(j[0], j[1])
        print(lcm_)



if __name__ == '__main__':
    print(all_pairs(4))
    

    

