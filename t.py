v = [1, 2, 3, 11, 4, 5, 6]

q = 10
outer = []
new_v = []

for i in range(len(v)):
    if v[i] <= q:
        new_v.append(v[i])

    else:
        outer.append(new_v)
        new_v.clear()

print(outer)
        
