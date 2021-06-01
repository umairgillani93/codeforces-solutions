def binary_search_recursive(arr, x):
    """divides the given array in two halves
    and recrusively finds the given number in each half"""
    
    if len(arr) > 1:
        mid = len(arr) // 2
        first_half = arr[: mid]
        second_half = arr[mid :]
        
        if x == arr[mid]:
            return True
        
        elif x < arr[mid]:
            return binary_search_recursive(first_half, x)
        
        else:
            return binary_search_recursive(second_half, x)
            
    
    else:
        return arr
    
    
A = [1,2,3,4,8,9]
item = 9

print(binary_search_recursive(A, item))
