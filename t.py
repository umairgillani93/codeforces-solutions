x, y = [int(x) for x in input().split()]
new_x, new_y = [int(x) for x in str(x)], [int(x) for x in str(y)]

print(new_x)
print(new_y)

if int(new_x[0]) >= int(new_y[0]):
    for c in range(1, len(new_x)):
        if int(new_x[c]) > int(new_y[c]):
            continue
        else:
            new_x[c] = new_y[c]

else:
    for c in range(1, len(new_y)):
        if int(new_y[c]) > int(new_x[c]):
            continue
        else:
            new_y[c] = new_x[c]


print(new_x)
print(new_y)
