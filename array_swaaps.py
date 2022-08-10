def sol():
  cases = int(input())
  array_a = []
  array_b = []
  nk = []
  for _ in range(cases):
    nk.append([int(x) for x in input().split()])
    array_a.append([int(x) for x in input().split()])
    array_b.append([int(x) for x in input().split()])

  print('nk: {}'.format(nk))
  print('arrays A: {}'.format(array_a))
  print('arrays B: {}'.format(array_b))

  for i in range(len(array_a)):
    k = nk[i][1]
    array_b[i].sort()

    if array_a[i][0] == array_b[i][0]:
      return 0
    elif array_b[i][0] > array_a[i][0]:
      array_a[i][0] = array_b[i][0]
      return sum(array_a[i])



if __name__ == '__main__':
  print(sol())

