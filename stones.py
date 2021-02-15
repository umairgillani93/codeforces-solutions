stones = int(input())
colors = str(input()).upper()
colors_list = ['R', 'G', 'B']

for c in colors:
    if c not in colors_list:
        print(f'wrong color inserted: {c}')
    else:
        continue

if stones > 50:
    print(f'too much stones on the table: {stones}')

if len(colors) != stones:
    print(f'fix the length for colors: {len(colors)}')

print(f'stones: colors: {stones, colors}')

count = 0
for i in range(len(colors) -1):
    if colors[i] == colors[i+1]:
        count += 1
    else:
        continue
        
print(f'minimum stones: {count}')
