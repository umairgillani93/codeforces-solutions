def main():
  n = int(input())
  cases = []
  for _ in range(n):
    cases.append(int(input()))
    
  num_hash = {}
  L = [str(x) for x in range(1, 10)]

  count = 0
  for i in range(len(L)):
    for j in range(1, 5):
      count += len(L[i] * j)
      num_hash['{}'.format(L[i] * j)] = count

  for case in cases:
    print(num_hash[str(case)])


main()

