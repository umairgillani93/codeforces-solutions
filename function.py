import threading

def function():
    n = int(input())
    nums = []
    for i in range(1, n+1):
        if i % 2 != 0:
            i = -i
            nums.append(i)
        else: 
            nums.append(i)

    print(sum(nums))


if __name__ == '__main__':
    t1 = threading.Thread(target=function)
    t1.start()
    t1.join()
