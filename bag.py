class Bag:
    def __init__(self):
        self._bag = []

    def __len__(self):
        return len(self._bag)

    def contains(self, item):
        idx = 0
        while idx < len(self._bag):
            if self._bag[idx] == item:
                return True 
            else:
                idx += 1 

        return False 

    def add(self, item):
        self._bag.append(item)

        return self._bag

    def remove(self, item):
        if self.contains(item) == True:
            for idx, ele in enumerate(self._bag):
                if ele == item:
                    self._bag.pop(idx)

                else:
                    continue 

        raise Exception("Item not in bag!")

    def __iter__(self):
        yield self._bag 


bag = Bag()

print(len(bag))

bag.add(2)

print(len(bag))

print(bag.contains(2))

print(bag.remove(2))