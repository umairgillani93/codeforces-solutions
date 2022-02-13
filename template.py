import sys

infile = sys.argv[1] if len(sys.argv)>1 else "spy.in"

with open(infile, 'r') as file:
    result = file.read().strip().split("\n")
    sizes = []
    arrays = []
    cases = int(result[0])
    new_result = result[1:]
    
    for i in range(len(new_result)):
        if i%2 == 0:
            sizes.append(new_result[i])
        else:
            arrays.append(new_result[i])

    sizes = [int(x) for x in sizes]

    for i in range(len(arrays)):
        arrays[i] = [int(x) for x in  arrays[i].split(" ")]
    
    #print('sizes: ', sizes)
    #print('arrays: ', arrays)


