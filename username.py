class Username:
    def __init__(self, contests, scores):
        self.contests = contests 
        self.scores = scores 
        # self.check = self.scores[0]
        self.amazings = 0
    def main(self):
        # check = self.scores[0]

        if len(self.scores) == 2 and self.scores[1] < self.scores[0]:
            self.amazings = 1

        else:
            
            for i in range(len(self.scores)-1):
                if len(self.scores[:i]) == 0:
                    continue
                elif self.scores[i+1] > max(self.scores[:i]):
                    self.amazings += 1
                elif self.scores[i+1] < min(self.scores[:i]):
                    self.amazings += 1
                else:
                    continue                                

        print(self.amazings)

    
    def __repr__(self):
        return """A usernameclass that checks amazing performances 
        counts and reports back to user!"""


if __name__ == '__main__':
    contests = int(input())
    scores = [int(x) for x in input().split()]
    username = Username(contests, scores)
    username.main()
