def sol():
  s = str(input())
  for i in range(len(s) - 1):
    cnt = 0
    while s[i] == s[i + 1]:
      cnt += 1
      i += 1
      if cnt >= 7:
        return 'YES'

  return 'NO'
print(sol())


     
