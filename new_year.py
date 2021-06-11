class NewYear:
    def __init__(self, probs, mins):
        self.probs = probs
        self.mins = mins 
        self.count = 0 

    def main(self):
        time_left = 240 - int(self.mins)
        # check = 5 * int(i)
        for i in range(1, self.probs+1):
            if time_left >= 5 * int(i):
                self.count += 1 
                time_left -= 5 * (i)

            else:
                break 

        print(self.count) 

if __name__ == '__main__':
    probs, mins = (int(x) for x in input().split())
    ny = NewYear(probs, mins)
    ny.main()


