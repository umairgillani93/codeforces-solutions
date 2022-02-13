def sol():
  n = int(input())
  sizes = []
  arrays = []
  for _ in range(n):
    sizes.append(int(input()))
    arrays.append([int(x) for x in input().split()])

  for i in range(len(arrays)):
    array = sorted(arrays[i])
    new_array = []
    for c in range(len(array)-1):
      new_array.append(abs(array[c] - array[c+1]))

    print(min(new_array))

  
sol()
