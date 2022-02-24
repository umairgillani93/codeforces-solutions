def main():
  N = int(input())
  lengths  = []
  for _ in range(N):
    lengths.append(int(input()))
  
  for i in lengths:
    new_l = []
    for j in range(1, i):
      new_l.append(j+1)

    new_l.append(1)
    print(' '.join([str(x) for x in new_l]))


main()

      


