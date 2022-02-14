def main():
  s = str(input())
  s = list(s)

  borze_code = ''
  for i in range(0, len(s) -1, 2):
    if s[i] == '-' and s[i + 1] ==  '.':
      borze_code += '1'

    elif s[i] == '-' and s[i + 1] == '-':
      borze_code += '2'

    elif (s[i] == '.' and  s[i + 1] == '-') or (s[i] == '.' and s[i + 1] == '.'):
      borze_code += '0'

  return borze_code

print(main())
          




