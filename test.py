def recurse(arr, num):
  if num in arr:
    return arr.index(num)

  else:
    return recurse(arr, num-1)


print(recurse([1,2,2,7], 4))
