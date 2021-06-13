class Shovel:
    def __init__(self, k, r):
        self.k = k 
        self.r = r 
        self.value = None

    def main(self):
        for i in range(1, 9+1):
            value = i * k 

            if ((value -r) % 10 == 0) or (value % 10 == 0):
                print(i)
                break

            else:
                continue

if __name__ == "__main__":
    k, r = (int(x) for x in input().split())
    shovel = Shovel(k, r)
    shovel.main()
    