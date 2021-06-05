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

    def solve(self):
        return 5 * (self.probs * (self.probs+1) // 2)

    def main(self):
        if float(self.mins / 60) < 4.0:
            return 'Limax can solve some problems!'
        
        return 'Limax cannot solve any problem, he has to reach'


if __name__ == '__main__':
    probs, mins = (int(x) for x in input().split())
    nyc = NewYearChallenge(probs, mins)

    print(nyc.solve())