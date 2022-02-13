#def main():
#    n = int(input())
#    sizes = []
#    arrays = []
#
#    for _ in range(n):
#        sizes.append(int(input()))
#        arrays.append([int(x) for x in input().split()])
#
#    
#    new_array = []
#    for array in arrays:
#        for i in range(len(array)-1):
#            new_arr = array.pop(i)
#            print('new array: {}'.format(new_arr))
#            break
#
#        break
#           
#
#print(main())

arr = [3,1,2]

count = 0
for i in range(len(arr)):
    array_ = arr 
    item = arr.pop(i)

    for j in range(len(arr)):
        if abs(arr[j] - item) <= 1:
            continue

        else:
            count += 1

    arr = array_
    print(arr)




# list of numbers 
# loop through it
# check for each item in list, if the difference b/w item and others is zero, continue otherwise
# 

# mylist = [3, 1, 2]

#for item in mylist:
#  a = item 
#  mylist = mylist other than 'a'
#  check each item difference with 'a'
#  
#  if difference is less than or equals 1
#  continue 
#  otherwise 
#  list are not same

list_ = [3,2,1]

for i in range(len(list_)):
    val = list_[i]
    
    new_list = list_.remove(val)
    for j in range(len(new_list)):
        abs_diff = abs(val - new_list[j])
        if abs_diff <= 1:
            continue
        else:
            break

    print('ok')
