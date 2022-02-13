def is_prime(n):
  if n == 2:
    return True
  else:
    for i in range(2, n):
      if n % i == 0:
        return False
      else:
        continue

    return True

def main():
  N = int(input())
  primes = []
  for i in range(2, N):
    if is_prime(i):
      primes.append(i)
    else:
      continue


  if N % 2 == 0:
    for _ in range(N // 2):
      print(2, end = " ")
      
  else:
    print(" ".join([str(x) for x in primes]))

main()
  

print(main())
  

