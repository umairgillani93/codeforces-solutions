def hedrons(n, shapes):
    shapes_ = {'Tetrahedron': 4, 'Cube': 6, 'Octahedron': 8, 'Dodecahedron': 12, 'Icosahedron': 20}
    sum_ = 0
    for shape in shapes:
        sum_ += shapes_[shape]
    
    return sum_

if __name__ == '__main__':
    n = int(input())
    shapes = []
    for i in range(n):
        inp = str(input())
        shapes.append(inp)

    print(hedrons(n, shapes))
