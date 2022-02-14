def main():
  n = int(input())
  sizes = []
  perms = []
  for i in range(n):
    sizes.append(int(input()))
    perms.append([int(x) for x in input().split()])
    
  for perm in perms:
    if len(perm) == 1:
      print(" ".join([str(x) for x in perm]))

    else:
      for i in range(len(perm) -1):
        if perm[i] > perm[i+1]:
          perm[i+1], perm[i] = perm[i], perm[i+1]
          break
        
        else:
          continue

      print(" ".join([str(x) for x in perm]))

if __name__ == '__main__':
  main()
