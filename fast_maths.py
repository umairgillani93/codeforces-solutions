def fast_maths():
    n1 = str(input())
    n2 = str(input())

    l_ = [(int(x),int(y)) for x, y in zip(n1, n2)]
    diff = ''
    for i in l_:
        if i[0] - i[1] != 0:
            diff += '1'
        else:
            diff += '0'
    
    return diff 


if __name__ == '__main__':
    print(fast_maths())
