class SinglyNode:
    def __init__(self, value):
        self.value = value 
        self.next = None 

    
head = SinglyNode(5)
second = SinglyNode(6)
third = SinglyNode(7)

head.next = second 
second.next = third 


print(head.value)
print(head.next.value)
print('\n')
print(second.value)
print(second.next.value)
print('\n')
print(third.value)
print(third.next)