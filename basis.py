def main(arr, N):
  new_arr = []
  for i in range(len(arr)):
    for j in range(N):
      new_arr.append(arr[i])

  return new_arr

def main2(arr, x, y):
  for i in range(len(arr)):
    if arr[i] == x:
      arr[i] == y
    elif arr[i] == y:
      arr[i] == x

  return arr

print(main2([1,2,2,3], 2, 3))
