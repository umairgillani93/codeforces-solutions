x, y = [int(x) for x in input().split()]
new_x, new_y = [int(x) for x in str(x)], [int(x) for x in str(y)]

print(new_x)
print(new_y)

# Find the length of the shorter number
min_length = min(len(new_x), len(new_y))

for c in range(0, min_length):
    if new_x[c] >= new_y[c]:
        new_y[c] = new_x[c]
    else:
        new_x[c] = new_y[c]

# Convert lists back to integers
new_x = int(''.join(map(str, new_x)))
new_y = int(''.join(map(str, new_y)))

print(new_x)
print(new_y)

