def main():
  n = int(input())
  sizes = []
  arrays = []
  for i in range(n):
    sizes.append(int(input()))
    arrays.append([int(x) for x in input().split()])

  for array in arrays:
    for i in range(len(array) - 1):
      if (array[i] > array[i+1]) and ((array[i] + array[i+1]) % 2 != 0):
        array[i], array[i+1] = array[i+1], array[i]
        
      else:
        continue

    if array == sorted(array):
      print('yes')

    else:
      print('no')


if __name__ == '__main__':
  main()
