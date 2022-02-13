def main():
  n = int(input())
  sizes = []
  arr1 = []
  arr2 = []
  for _ in range(n):
    sizes.append(int(input()))
    arr1.append([int(x) for x in input().split()])
    arr2.append([int(x) for x in input().split()])

  for i in range(len(arr1)):  # arr1 = [[3,5,3], [1,2,3,4,5]]
    count = 0
    for j in range(len(arr1[i])): # arr1[i] = [3,5,3]
      min_arr1 = min(arr1[i]) # min_arr1[i] = 3
      min_arr2 = min(arr2[i]) # mina_arr2[i] = 2
      
      if arr1[i][j] > min_arr1 and arr2[i][j] > min_arr2: # arr1[i][j] => 1st item of 1st array i.e 3
        count += max((arr1[i][j] - min_arr1, arr2[i][j] - min_arr2)) 
      
      elif arr1[i][j] > min_arr1:
        count += arr1[i][j] - min_arr1

      elif arr2[i][j] > min_arr2:
        count += arr2[i][j] - min_arr2

    print(count)

main()
