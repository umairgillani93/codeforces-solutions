#def is_prime(n):
#  if n == 2:
#    return True
#  else:
#    for i in range(2, n):
#      if n % i == 0:
#        return False
#      else:
#        continue
#
#    return True
#
#def main():
#  N = int(input())
#  primes = []
#  for i in range(2, N):
#    if is_prime(i):
#      primes.append(i)
#    else:
#      continue
#
#
#  odds = []
#  if N % 2 == 0: # if N is an even number
#    for _ in range(N // 2):
#      print(2, end = " ")
# 
#  else: # if N is an odd  number; things will be change in order to find the maximum summands
#    for _ in range((N-3)//2):
#      odds.append(2)
#
#  odds.append(3)
#  for o in range(len(odds)):
#    print(odds[o], end = " ")
#
#   
#main()

def main():
  N = int(input())
  
  if N % 2 == 0:
    print(N // 2)
    for i in range(N // 2):
      print(2, end = " ")
  
  else:
    odds = []
    for i in range((N -3) // 2):
      odds.append(2)

    odds.append(3)

    print(len(odds))
    for j in range(len(odds)):
      print(odds[j], end = " ")

main()
