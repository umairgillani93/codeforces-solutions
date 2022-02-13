def main():
  n, k, l, c, d, p, nl, np= [int(x) for x in input().split()]
  #print(n, k, l, c, d, p, nl, np)
  all_drink = k * l
  all_toast = all_drink // nl 
  enough_limes_for_toasts = c * d 
  enough_salt_for_toasts = p // np

  
  print(min(all_toast, enough_limes_for_toasts, enough_salt_for_toasts) // n) 


main()

