summans = str(input())

if len(summans) == 0 or ' ' in summans or len(summans) > 100:
    print(f'string not valid: {summans}')

xenia_list = sorted([int(x) for x in summans.split('+')])

for idx, num in enumerate(xenia_list):
    if num >= 4:
        xenia_list.pop(idx)
    else:
        continue

print('+'.join([str(x) for x in xenia_list]))
