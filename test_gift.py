#l1 = [3, 5, 6]
#l2 = [3, 2, 3]
#
#final = list(zip(l1, l2))
#
#min_l1 = min(l1)
#min_l2 = min(l2)
#
def main():
  arr1 = [1,2,3,4,5]
  arr2 = [5,4,3,2,1] 
  #n = int(input())
  #sizes = []
  #arr1 = []
  #arr2 = []
  #for _ in range(n):
  #  sizes.append(int(input()))
  #  arr1.append([int(x) for x in input().split()])
  #  arr2.append([int(x) for x in input().split()])

  #print('arr1: {}'.format(arr1))
  #print('arr2: {}'.format(arr2))
  #print('sizes: {}'.format(sizes))

  count = 0 
  min_arr1 = min(arr1)
  min_arr2 = min(arr2)
  print('min arr1: {}'.format(min_arr1))
  print('min arr2: {}'.format(min_arr2))
  for i in range(len(arr1)):
    if arr1[i] > min_arr1 and arr2[i] > min_arr2:
      count += max((arr1[i] - min(arr1), arr2[i] - min(arr2)))

    elif arr1[i] > min_arr1:
      count += arr1[i] - min_arr1

    elif arr2[i] > min_arr2:
      count += arr2[i] - min_arr2


  print('final count is: {}'.format(count))

main()
