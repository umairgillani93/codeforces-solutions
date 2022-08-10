import itertools 
def not_fibon(array):
  for i in range(len(array)-2):
    if array[i] + array[i+1] != array[i+2]:
      continue
    else:
      return -1

  return array

#print(not_fibon([1,2,3]))

def main():
  N = int(input())
  sizes = []
  for _ in range(N):
    sizes.append(int(input()))

  for i in range(len(sizes)):
    l_ = list(range(1, sizes[i]+1))
    s_ = sizes[i]
    perms = [list(x) for x in itertools.permutations(l_, s_)]
    ll = []
    for perm in perms:
      print(perm)
      if type(not_fibon(perm)) == list:
        ll.append(perm)
      else:
        continue

    print(ll)


main()
