from typing import NewType


class NewYearChallenge:

    """ here is the thing 
    Limax needs to solve problems in 4hrs - time to reach party in mins 

    e.s if he has 3 problems to solve and 222 minsts 

    3 and 222 

    222 / 60 = 3.7 
    4 - 3.7 = 0.3 

    so he has 0.3 hrs to solve the problems i.e,

    1hr = 60 mins 
    0.1hr = 60 * 0.1

    and similarly,

    0.3hrs = 60 * 0.3 = 18, that's why he can solve only 2 problems taking formula 5(i)"""

    def __init__(self, probs, mins):
        self.probs = probs 
        self.mins = mins 
        self.count = 0 

    def solve(self):
        problems_time = []
        for i in range(1, int(self.probs)+1):
            problems_time.append(5 * (int(i) * (int(i)+1) // 2))

        return problems_time

    def main(self):
        time_left = 4.0 - float(self.mins / 60)
        if time_left < 4.0:
            if time_left < 1.0:
                actual_time = 18 / float(time_left)
                
                print(actual_time)

                for p in range(self.probs):
                    for t in self.solve():
                        if int(actual_time) > int(t):
                            self.count += 1

                        return self.count

               


            else:
                hrs, mins = str(time_left).split('.')
                print(f'hrs: {hrs} mins: {mins}')
                hrs, mins = int(hrs), int(mins)

                actual_time = (hrs * 180) + (18 / (mins / 10)) 

                print(actual_time)


                for p in range(self.probs):
                    for t in self.solve():
                        if actual_time > int(t):
                            self.count += 1
                            print(self.count)

                        return self.count

        else:
            return "No problems solved!"


if __name__ == '__main__':
    probs, mins = (int(x) for x in input().split())
    nyc = NewYearChallenge(probs, mins)

    print(nyc.main())