def horse_shoes():
    colors = [int(x) for x in input().split()]
    _colors = []
    for c in colors:
        if c in _colors:
            continue
        else:
            _colors.append(c)

    return len(colors) - len(_colors)

if __name__ == '__main__':
    print(horse_shoes())
